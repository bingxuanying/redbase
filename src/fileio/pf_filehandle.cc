// File:            pf_filehandle.cc
// Description:     PF_FileHandle class implementation
// Author:          Bingxuan Ying
//

#include "pf_filehandle.h"

// Default constructor
PF_FileHandle::PF_FileHandle() {};
// Destructor
PF_FileHandle::~PF_FileHandle() {};

// Copy constructor
PF_FileHandle::PF_FileHandle(const PF_FileHandle &PF_FileHandle) {};

// Overload =
PF_FileHandle& PF_FileHandle::operator=(const PF_FileHandle &PF_FileHandle) {};

// Get the first page
RC PF_FileHandle::GetFirstPage(PF_PageHandle &PF_PageHandle) const {};
// Get the last page
RC PF_FileHandle::GetLastPage(PF_PageHandle &PF_PageHandle) const {};
// Get the next page
RC PF_FileHandle::GetNextPage(PageNum current, PF_PageHandle &PF_PageHandle) const {};
// Get the previous page
RC PF_FileHandle::GetPrevPage(PageNum current, PF_PageHandle &PF_PageHandle) const {};
// Get the previous page
RC PF_FileHandle::GetThisPage(PageNum pageNum, PF_PageHandle &PF_PageHandle) const {};

// Allocate a new page
RC PF_FileHandle::AllocatePage(PF_PageHandle &PF_PageHandle) {};
// Dispose of a page 
RC PF_FileHandle::DisposePage(PageNum pageNum) {};
// Mark a page as dirty
RC PF_FileHandle::MarkDirty(PageNum pageNum) const {};
// Unpin a page
RC PF_FileHandle::UnpinPage(PageNum pageNum) const {};
// Write dirty page(s) to disk  
RC PF_FileHandle::ForcePages(PageNum pageNum = ALL_PAGES) const {};