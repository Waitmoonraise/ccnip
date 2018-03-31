#ifndef _CCNIP_NIP_H
#define _CCNIP_NIP_H

#if defined(WIN32) | defined(WIN64)

#ifdef CCNIP_EXPORTS
#define CCNIP_API __declspec(dllexport)
#else
#define CCNIP_API __declspec(dllimport)
#endif

#endif /* Windows system config */


#include "cccfg.h"
#include "cctype.h"

#endif