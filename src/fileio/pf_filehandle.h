// File:            redbase.h
// Description:     provides access to the pages of an open file.
// Author:          Bingxuan Ying
//

#ifndef PF_PF_FileHandle_H
#define PF_PF_FileHandle_H

#include "redbase.h"
#include "pf_pagehandle.h"
#include "pf_internal.h"

const int ALL_PAGES = -1;

class PF_FileHandle {
public:
    PF_FileHandle  ();                         // Default constructor
    ~PF_FileHandle ();                         // Destructor

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
};

#endif