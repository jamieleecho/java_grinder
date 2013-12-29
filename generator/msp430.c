/**
 *  Java Grinder
 *  Author: The Naken Crew
 *   Email: mike@mikekohn.net
 *     Web: http://www.naken.cc/
 * License: GPL
 *
 * Copyright 2013 by The Naken Crew
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "msp430.h"

int msp430_init(void **context, FILE *out)
{
  return 0;
}

void msp430_serial_init(void *context, FILE *out)
{
}

void msp430_method(void *context, FILE *out, char *name)
{
}

int msp430_push_integer(void *context, FILE *out, int32_t n)
{
  return 0;
}

int msp430_push_long(void *context, FILE *out, int64_t n)
{
  return 0;
}

int msp430_push_float(void *context, FILE *out, float f)
{
  return 0;
}

int msp430_push_double(void *context, FILE *out, double f)
{
  return 0;
}

void msp430_close(void *context, FILE *out)
{
}


