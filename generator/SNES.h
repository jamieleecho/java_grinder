/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 * SNES by Joe Davisson
 *
 */

#ifndef SNES_H
#define SNES_H

#include "W65816.h"

class SNES : public W65816
{
public:
  SNES();
  virtual ~SNES();

  virtual int open(const char *filename);
  virtual int snes_setBackgroundColor_I();

private:
  void write_interrupts();
  void write_cartridge_info();
};

#endif

