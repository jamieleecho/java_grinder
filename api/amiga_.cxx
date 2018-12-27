/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "JavaClass.h"
#include "amiga_.h"

#define CHECK_FUNC(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->amiga_##funct##sig(); \
  }

#define CHECK_FUNC_CONST_1(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->amiga_##funct##sig(const_val); \
  }

#define CHECK_FUNC_CONST_2(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->amiga_##funct##sig(const_val1, const_val2); \
  }

int amiga(JavaClass *java_class, Generator *generator, const char *method_name)
{
  CHECK_FUNC(setPalette,_II)

  return -1;
}

int amiga(JavaClass *java_class, Generator *generator, const char *method_name, int const_val)
{
  return -1;
}

int amiga(JavaClass *java_class, Generator *generator, const char *function, int const_val1, int const_val2)
{
  return -1;
}

