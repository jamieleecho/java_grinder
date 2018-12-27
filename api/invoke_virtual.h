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

#ifndef INVOKE_VIRTUAL_H
#define INVOKE_VIRTUAL_H

#include "Generator.h"
#include "JavaClass.h"

int invoke_virtual(JavaClass *java_class, int method_id, int field_id, Generator *generator);
int invoke_virtual(JavaClass *java_class, int method_id, Generator *generator);

#endif

