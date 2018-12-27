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

#ifndef UART_H
#define UART_H

#include "Generator.h"
#include "JavaClass.h"

int uart(JavaClass *java_class, Generator *generator, const char *method_name, int port);
int uart(JavaClass *java_class, Generator *generator, const char *method_name, int port, int const_val);

#endif

