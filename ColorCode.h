#ifndef COLORCODE_H
#define COLORCODE_H

#include <iostream>
#include <vector>
#include <cstdio>
#include "ColorPair.hpp"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

    std::vector<std::string> PrintTelcoColorCodeReferenceManual();
}

#endif // !COLORCODE_H