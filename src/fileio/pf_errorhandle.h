#ifndef PF_ERRORHANDLE_H
#define PF_ERRORHANDLE_H

#include "redbase.h"

#define PF_EOF              // end of file
#define PF_PAGEPINNED       // page pinned in buffer
#define PF_PAGENOTINBUF     // page to be unpinned is not in buffer
#define PF_PAGEUNPINNED     // page already unpinned
#define PF_PAGEFREE         // page already free
#define PF_INVALIDPAGE      // invalid page number
#define PF_FILEOPEN         // file handle already open
#define PF_CLOSEDFILE       // file is closed

#define  PF_NOMEM           // out of memory
#define  PF_NOBUF           // out of buffer space
#define  PF_INCOMPLETEREAD  // incomplete read of page from file
#define  PF_INCOMPLETEWRITE // incomplete write of page to file
#define  PF_HDRREAD         // incomplete read of header from file
#define  PF_HDRWRITE        // incomplete write of header to file

// Internal PF errors:
#define  PF_PAGEINBUF       // new allocated page already in buffer
#define  PF_HASHNOTFOUND    // hash table entry not found
#define  PF_HASHPAGEEXIST   // page already exists in hash table
#define  PF_INVALIDNAME     // invalid file name
#define  PF_UNIX            // Unix error

void PrintError (RC rc);

#endif