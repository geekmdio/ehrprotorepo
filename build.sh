#!/usr/bin/env bash

DIR_SUFFIX=proto
GOLANG=go
GODIR=${GOLANG}${DIR_SUFFIX}
CSHARPLANG=js
CSHARPDIR=${CSHARPLANG}${DIR_SUFFIX}
JSLANG=js
JSDIR=${JSLANG}${DIR_SUFFIX}
JAVALANG=js
JAVADIR=${JAVALANG}${DIR_SUFFIX}
CPPLANG=cpp
CPPDIR=${CPPLANG}${DIR_SUFFIX}
OBJCLANG=objc
OBJCDIR=${OBJCLANG}${DIR_SUFFIX}
PHPLANG=php
PHPDIR=${PHPLANG}${DIR_SUFFIX}
PYTHONLANG=python
PYTHONDIR=${PYTHONLANG}${DIR_SUFFIX}
RUBYLANG=ruby
RUBYDIR=${RUBYLANG}${DIR_SUFFIX}

ensure () {
    # $1 is the directory of interested
    echo "Checking for presence of $1 directory"
    if [ ! -d $1 ] ; then
        echo "- Making the $1 directory to put the files in." ;
        mkdir $1
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
    if [ $? -eq 0 ]; then
        echo "Running the protocol buffers compiler to make $1 files in the $2."
        case $1 in
            go)
                protoc -I=proto_v1  proto_v1/*.proto --go_out=plugins=grpc:$2
                ;;
            csharp)
                protoc -I=proto_v1  proto_v1/*.proto --csharp_out=$2
                ;;
            java) 
                protoc -I=proto_v1  proto_v1/*.proto --java_out=$2
                ;;
            js) 
                protoc -I=proto_v1  proto_v1/*.proto --js_out=$2
                ;;
            objc) 
                protoc -I=proto_v1  proto_v1/*.proto --objc_out=$2
                ;;
            php) 
                protoc -I=proto_v1  proto_v1/*.proto --php_out=$2
                ;;      
            python) 
                protoc -I=proto_v1  proto_v1/*.proto --python_out=$2
                ;;
            ruby) 
                protoc -I=proto_v1  proto_v1/*.proto --ruby_out=$2
                ;;
        esac
        
    else 
        echo "There may have been an error making or locating the $2 directory. Please manually confirm it's existence and then run again."
    fi

    if [ $? -eq 0 ]; then  
        echo "- Successfully compiled to $1".
    else    
        echo " - !! Failed to compile for $1".
    fi
}

ensure ${GODIR}
compile_for ${GOLANG} ${GODIR}

# ensure ${CPPDIR}
# compile_for ${CPPLANG} ${CPPDIR}

ensure ${CSHARPDIR}
compile_for ${CSHARPLANG} ${CSHARPDIR}

# ensure ${JAVADIR}
# compile_for ${JAVALANG} ${JAVADIR}

ensure ${JSDIR}
compile_for ${JSLANG} ${JSDIR}

# ensure ${OBJDIR}
# compile_for ${OBJCLANG} ${OBJDIR}

# ensure ${PHPDIR}
# compile_for ${PHPLANG} ${PHPDIR}

ensure ${PYTHONDIR}
compile_for ${PYTHONLANG} ${PYTHONDIR}

# ensure ${RUBYDIR}
# compile_for ${RUBYLANG} ${RUBYDIR}