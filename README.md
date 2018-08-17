<<<<<<< HEAD
# EHRProtoRepo v0.3.1
=======
# EHRProtoRepo v0.3.0

>>>>>>> 8a56a2f209f3ce4f24afaec19d09ddb25313d655
Repository dedicated to protocol buffers for electronic health records data.

NOTE: v1 of these proto defs will not be structured to support billing and coding. The aim will be on functionality and giving clinicians treating uninsured patients in need can simply perform their jobs well.

Currently supported:
1. Medical Issues (Rough list of about 220)
2. Note Objects
3. Note Service

VERSION 0.3.1 NOTES:
- Changed NoteService to use int64 type so that it's aligned with the Note and NoteFragment Id type. 

VERSION 0.3.0 NOTES:
- Refactored NoteFragmentPriority to RecordPriority
    - Updated NoteFragment to reflect this change
- Refactored NoteFragmentStatus to RecordStatus
    - Updated NoteFragment to reflect this change.
- Added value DELETED to RecordStatus
- Added RecordStatus to Note
- Changed Id to int64 to support very large index values