#ifndef COLORCODE_H
#define COLORCODE_H

#include <iostream>
#include "ColorPair.hpp"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

    void PrintTelcoColorCode();
}

#endif // !COLORCODE_H