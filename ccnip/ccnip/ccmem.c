#include "ccmem.h"

void* _ccMemAlloc(_csize_t size, _csize_t algin);
void _ccMemFree(void* data, _csize_t size);

static ccAllocHandle __defaultMemAlloc = _ccMemAlloc;
static ccFreeHandle __defaultMemFree   = _ccMemFree;

void* _ccMemAlloc(_csize_t size, _csize_t algin) {
	return malloc(size);
}

void _ccMemFree(void* data, _csize_t size) {
	free(data);
}

void ccMemSetAF(ccAllocHandle alh, ccFreeHandle frh)
{
	__defaultMemAlloc = alh;
	__defaultMemFree = frh;
}

void* ccMalloc(_csize_t size, _csize_t align)
{
	return __defaultMemAlloc(size, align);
}

void ccFree(void* data, _csize_t size)
{
	__defaultMemFree(data, size);
}
