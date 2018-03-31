/*!
 * \file mbuffer.h
 * \date 2018/03/31 23:46
 *
 * \author KVamp
 * Contact: user@company.com
 *
 * \brief 
 *	Fixed size memory bufer model
 *
 * TODO: long description
 *
 * \note
*/

#ifndef _CCNIP_MBUFFER_H
#define _CCNIP_MBUFFER_H

#include "cctype.h"

typedef struct _mbuffer{
	_cui8*		   base;
	_cui8*		   baseAligned;
	_csize_t	   size;
	_cui32		   busyq; /* The high 16 bit point to pre block, the low 16 bit point to next block*/
	_cui32		   idleq;
}mbuffer;


#endif