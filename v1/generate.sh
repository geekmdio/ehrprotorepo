#!/usr/bin/env bash

PROTOBUF_FILES_DIR=protobuf_files
BASE_OUT_DIR=generated
DIR_SUFFIX=proto
GOLANG=go
GODIR=${BASE_OUT_DIR}/${GOLANG}${DIR_SUFFIX}
CSHARPLANG=csharp
CSHARPDIR=${BASE_OUT_DIR}/${CSHARPLANG}${DIR_SUFFIX}
JSLANG=js
JSDIR=${BASE_OUT_DIR}/${JSLANG}${DIR_SUFFIX}
JAVALANG=java
JAVADIR=${BASE_OUT_DIR}/${JAVALANG}${DIR_SUFFIX}
CPPLANG=cpp
CPPDIR=${BASE_OUT_DIR}/${CPPLANG}${DIR_SUFFIX}
OBJCLANG=objc
OBJCDIR=${BASE_OUT_DIR}/${OBJCLANG}${DIR_SUFFIX}
PHPLANG=php
PHPDIR=${BASE_OUT_DIR}/${PHPLANG}${DIR_SUFFIX}
PYTHONLANG=python
PYTHONDIR=${BASE_OUT_DIR}/${PYTHONLANG}${DIR_SUFFIX}
RUBYLANG=ruby
RUBYDIR=${BASE_OUT_DIR}/${RUBYLANG}${DIR_SUFFIX}

ensure () {
    # $1 is the directory of interested
    echo "Checking for presence of $1 directory"
    if [ ! -d $1 ] ; then
        echo "- Making the $1 directory to put the files in." ;
        mkdir -p $1
        if [ $? -eq 0 ] ; then
            echo "-- Success."
        else 
            echo "-- !! Failed to make $1 directory and cannot place files. Consider doing so manually and run this script again."
            return 1
        fi

    fi
    echo "- The $1 directrory has been located!"
    return 0
}


compile_for () {
    # $1 = langauge; go, csharp, js, java, python, cpp, php, python, ruby, objc
    # $2 = directory
    # $3 = true/false GRPC is supported
    if [ $? -eq 0 ]; then
        echo "Running the protocol buffers compiler to make $1 files in the $2."
        case $1 in
            go)
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --go_out=plugins=grpc:$2
                ;;
            csharp)
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --csharp_out=$2
                ;;
            java) 
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --java_out=$2
                ;;
            js) 
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --js_out=$2
                ;;
            objc) 
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --objc_out=$2
                ;;
            php) 
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --php_out=$2
                ;;      
            python) 
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --python_out=plugins=grpc:$2
                ;;
            ruby) 
                protoc -I=${PROTOBUF_FILES_DIR}  ${PROTOBUF_FILES_DIR}/*.proto --ruby_out=$2
                ;;
        esac
        
    else 
        echo "There may have been an error making or locating the $2 directory. Please manually confirm it's existence and then run again."
    fi

    if [ $? -eq 0 ]; then  
        echo "- Successfully compiled to $1."
    else    
        echo " - !! Failed to compile for $1."
    fi

    if [ ${3} == "false" ]; then 
        grcp_not_supported $1
    fi
}

grcp_not_supported() {
    echo "-- GRPC is not currently automatically implemented for $1."
}

ensure ${GODIR}
compile_for ${GOLANG} ${GODIR} true
echo ''

ensure ${CPPDIR}
compile_for ${CPPLANG} ${CPPDIR} false
echo ''

ensure ${CSHARPDIR}
compile_for ${CSHARPLANG} ${CSHARPDIR} false
echo ''

ensure ${JAVADIR}
compile_for ${JAVALANG} ${JAVADIR} false
echo ''

ensure ${JSDIR}
compile_for ${JSLANG} ${JSDIR} false
echo ''

ensure ${OBJCDIR}
compile_for ${OBJCLANG} ${OBJCDIR} false
echo ''

ensure ${PHPDIR}
compile_for ${PHPLANG} ${PHPDIR} false
echo ''

ensure ${PYTHONDIR}
compile_for ${PYTHONLANG} ${PYTHONDIR} true
echo ''

ensure ${RUBYDIR}
compile_for ${RUBYLANG} ${RUBYDIR} true
echo ''