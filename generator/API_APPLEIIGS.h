/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2014-2015 by Michael Kohn
 *
 */

#ifndef _API_APPLEIIGS_H
#define _API_APPLEIIGS_H

class API_AppleIIgs
{
public:
  // AppleIIgs
  virtual int appleiigs_plotChar_IC() { return -1; }
  virtual int appleiigs_printChar_C() { return -1; }
  virtual int appleiigs_hiresEnable() { return -1; }
  virtual int appleiigs_hiresPlot_II() { return -1; }
};

#endif

