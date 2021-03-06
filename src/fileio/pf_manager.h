// File:            pf_manager.h
// Description:     handles the creation, deletion, opening, and 
//                  closing of paged files, along with the allocation
//                  and disposal of scratch pages.
// Author:          Bingxuan Ying
//

#ifndef PF_MANAGER_H
#define PF_MANAGER_H

class PF_Manager {
public:
    PF_Manager    ();                           // Constructor
    ~PF_Manager   ();                           // Destructor
    
    // Create a new file
    RC CreateFile    (const char *fileName);
    // Destroy a file
    RC DestroyFile   (const char *fileName);
    // Open a file
    RC OpenFile      (const char *fileName, PF_FileHandle &fileHandle);
    // Close a file
    RC CloseFile     (PF_FileHandle &fileHandle);

    // Allocate a new scratch page in buffer
    RC AllocateBlock (char *&buffer);
    // Dispose of a scratch page
    RC DisposeBlock  (char *buffer);

private:
    PF_BufferMgr *pBufferMgr;                      // page-buffer manager
};

#endif