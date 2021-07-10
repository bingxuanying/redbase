// 
// File:            pf_pagehandle.h
// Description:     PF_PageHandle class implementation
// Author:          Bingxuan Ying
//

#include "pf_pagehandle.h"

// Default constructor
PF_PageHandle::PF_PageHandle() {};
PF_PageHandle::~PF_PageHandle() {};

// Copy constructor
PF_PageHandle::PF_PageHandle(const PF_PageHandle &PF_PageHandle) {};
// Overload =
PF_PageHandle& PF_PageHandle::operator=(const PF_PageHandle &PF_PageHandle) {};
// Set pData to point to the page contents
RC PF_PageHandle::GetData(char *&pData) const {};
// Return the page number
RC PF_PageHandle::GetPageNum(PageNum &pageNum) const {};