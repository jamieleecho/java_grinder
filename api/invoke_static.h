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

#ifndef INVOKE_STATIC_H
#define INVOKE_STATIC_H

#include "Generator.h"
#include "JavaClass.h"

int invoke_static(JavaClass *java_class, int method_id, Generator *generator);
int invoke_static(JavaClass *java_class, int method_id, Generator *generator, int *const_vals, int const_count);
int invoke_static(JavaClass *java_class, int method_id, Generator *generator, const char *const_val);

#endif

