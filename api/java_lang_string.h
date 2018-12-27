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

#ifndef JAVA_LANG_STRING_H
#define JAVA_LANG_STRING_H

#include "Generator.h"
#include "JavaClass.h"

int java_lang_string(JavaClass *java_class, Generator *generator, const char *function, const char *field_name, int field_id);
int java_lang_string(JavaClass *java_class, Generator *generator, const char *method_name);

#endif

