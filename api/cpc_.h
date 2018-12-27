/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 * CPC support started by Carsten Dost  - https://github.com/deringenieur71
 *
 */
 
#ifndef CPC_H
#define CPC_H

#include "Generator.h"
#include "JavaClass.h"

int cpc(JavaClass *java_class, Generator *generator, const char *method_name);
int cpc(JavaClass *java_class, Generator *generator, const char *method_name, int const_val);
int cpc(JavaClass *java_class, Generator *generator, const char *method_name, int const_val1, int const_val2);

#endif

