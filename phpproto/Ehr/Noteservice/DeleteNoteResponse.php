<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: noteservice.proto

namespace Ehr\Noteservice;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>ehr.noteservice.DeleteNoteResponse</code>
 */
class DeleteNoteResponse extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.ehr.noteservice.NoteServiceResponseStatus status = 1;</code>
     */
    private $status = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type \Ehr\Noteservice\NoteServiceResponseStatus $status
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\Noteservice::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>.ehr.noteservice.NoteServiceResponseStatus status = 1;</code>
     * @return \Ehr\Noteservice\NoteServiceResponseStatus
     */
    public function getStatus()
    {
        return $this->status;
    }

    /**
     * Generated from protobuf field <code>.ehr.noteservice.NoteServiceResponseStatus status = 1;</code>
     * @param \Ehr\Noteservice\NoteServiceResponseStatus $var
     * @return $this
     */
    public function setStatus($var)
    {
        GPBUtil::checkMessage($var, \Ehr\Noteservice\NoteServiceResponseStatus::class);
        $this->status = $var;

        return $this;
    }

}

