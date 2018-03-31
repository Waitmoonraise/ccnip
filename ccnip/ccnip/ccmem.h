#ifndef _CCNIP_MEM_H
#define _CCNIP_MEM_H

#include "ccnip.h"

typedef void* (*ccAllocHandle)(_csize_t size, _csize_t align);
typedef void* (*ccFreeHandle)(void* data, _csize_t size);

CCNIP_API void  ccMemSetAF(ccAllocHandle alh, ccFreeHandle frh);
CCNIP_API void* ccMalloc(_csize_t size, _csize_t align);
CCNIP_API void  ccFree(void* data, _csize_t size);

#endif
