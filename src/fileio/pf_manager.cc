// File:            pf_manager.cc
// Description:     PF_Manger class implementation
// Author:          Bingxuan Ying
//

#include "pf_manager.h"
#include "pf_internal.h"

// Constructor
PF_Manager::PF_Manager() {};
// Destructor
PF_Manager::~PF_Manager() {};
    
// Create a new file
RC PF_Manager::CreateFile(const char *fileName) {};
// Destroy a file
RC PF_Manager::DestroyFile(const char *fileName) {};
// Open a file
RC PF_Manager::OpenFile(const char *fileName, PF_FileHandle &fileHandle) {};
// Close a file
RC PF_Manager::CloseFile(PF_FileHandle &fileHandle) {};

// Allocate a new scratch page in buffer
RC PF_Manager::AllocateBlock(char *&buffer) {};
// Dispose of a scratch page
RC PF_Manager::DisposeBlock(char *buffer) {};