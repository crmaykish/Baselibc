/*
 * nrand48.c
 */

#include <stdlib.h>
#include <stdint.h>

long nrand48(short unsigned *xsubi)
{
	return (long)((uint32_t) jrand48(xsubi) >> 1);
}
