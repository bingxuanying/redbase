// 
// File:            pf_filehandle.h
// Description:     provides access to the pages of an open file.
// Author:          Bingxuan Ying
//

#ifndef PF_FileHandle_H
#define PF_FileHandle_H

#include "pf.h"

const int ALL_PAGES = -1;

class PF_FileHandle {
public:
    PF_FileHandle  ();                              // Default constructor
    ~PF_FileHandle ();                              // Destructor

    // Copy constructor
    PF_FileHandle  (const PF_FileHandle &PF_FileHandle);

    // Overload =
    PF_FileHandle& operator= (const PF_FileHandle &PF_FileHandle);

    // Get the first page
    RC GetFirstPage   (PF_PageHandle &PF_PageHandle) const;
    // Get the last page
    RC GetLastPage    (PF_PageHandle &PF_PageHandle) const;
    // Get the next page
    RC GetNextPage    (PageNum current, PF_PageHandle &PF_PageHandle) const;
    // Get the previous page
    RC GetPrevPage    (PageNum current, PF_PageHandle &PF_PageHandle) const;
    // Get the previous page
    RC GetThisPage    (PageNum pageNum, PF_PageHandle &PF_PageHandle) const;

    // Allocate a new page
    RC AllocatePage   (PF_PageHandle &PF_PageHandle);
    // Dispose of a page 
    RC DisposePage    (PageNum pageNum);
    // Mark a page as dirty
    RC MarkDirty      (PageNum pageNum) const;
    // Unpin a page
    RC UnpinPage      (PageNum pageNum) const;
    // Write dirty page(s) to disk  
    RC ForcePages     (PageNum pageNum = ALL_PAGES) const;
    
private:

    // IsValidPageNum will return TRUE if page number is valid and FALSE
    // otherwise
    int IsValidPageNum (PageNum pageNum) const;

    PF_BufferMgr *pBufferMgr;                      // pointer to buffer manager
    PF_FileHdr hdr;                                // file header
    int bFileOpen;                                 // file open flag
    int bHdrChanged;                               // dirty flag for file hdr
    int unixfd;                                    // OS file descriptor
};

#endif