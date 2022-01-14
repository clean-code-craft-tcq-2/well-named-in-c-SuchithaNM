#ifndef TESTCOLORPAIR_H
#define TESTCOLORPAIR_H

#include "ColorPair.h"

extern void testNumberToPair(int pairNumber,    MajorColor expectedMajor,     MinorColor expectedMinor);
extern void testPairToNumber(     MajorColor major,     MinorColor minor,     int expectedPairNumber);

#endif

