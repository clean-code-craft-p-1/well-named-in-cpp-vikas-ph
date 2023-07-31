#ifndef TELCOCOLORCODERTEST_H
#define TELCOCOLORCODERTEST_H

#include "ColorPair.hpp"

void testNumberToPair(int pairNumber,
                      TelCoColorCoder::MajorColor expectedMajor,
                      TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(TelCoColorCoder::MajorColor major,
                      TelCoColorCoder::MinorColor minor,
                      int expectedPairNumber);

#endif // !TELCOCOLORCODERTEST_H