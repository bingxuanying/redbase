// File:            redbase.h
// Description:     provides access to the contents of a given page.
// Author:          Bingxuan Ying
//

#ifndef PF_PF_PageHandle_H
#define PF_PF_PageHandle_H

#include "redbase.h"
#include "pf_internal.h"

class PF_PageHandle {
public:
    PF_PageHandle  ();                          // Default constructor
    ~PF_PageHandle ();                          // Destructor

	// Copy constructor
    PF_PageHandle  (const PF_PageHandle &PF_PageHandle);
	// Overload =
    PF_PageHandle& operator= (const PF_PageHandle &PF_PageHandle);
	// Set pData to point to the page contents
    RC GetData        (char *&pData) const;
	// Return the page number
    RC GetPageNum     (PageNum &pageNum) const;
};

#endif
