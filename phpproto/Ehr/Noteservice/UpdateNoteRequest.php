<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: noteservice.proto

namespace Ehr\Noteservice;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>ehr.noteservice.UpdateNoteRequest</code>
 */
class UpdateNoteRequest extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int64 id = 1;</code>
     */
    private $id = 0;
    /**
     * Generated from protobuf field <code>.ehr.note.Note note = 2;</code>
     */
    private $note = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type int|string $id
     *     @type \Ehr\Note\Note $note
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\Noteservice::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>int64 id = 1;</code>
     * @return int|string
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Generated from protobuf field <code>int64 id = 1;</code>
     * @param int|string $var
     * @return $this
     */
    public function setId($var)
    {
        GPBUtil::checkInt64($var);
        $this->id = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.ehr.note.Note note = 2;</code>
     * @return \Ehr\Note\Note
     */
    public function getNote()
    {
        return $this->note;
    }

    /**
     * Generated from protobuf field <code>.ehr.note.Note note = 2;</code>
     * @param \Ehr\Note\Note $var
     * @return $this
     */
    public function setNote($var)
    {
        GPBUtil::checkMessage($var, \Ehr\Note\Note::class);
        $this->note = $var;

        return $this;
    }

}

