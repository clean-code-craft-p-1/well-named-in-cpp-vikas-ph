#include <string>
#include "ColorCode.h"
#include "global.h"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor   = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor   = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }

    void PrintTelcoColorCode()
    {
        std::cout << "************************* COLOR CODE MANUAL *************************" << std::endl << std::endl;
        std::cout << "-------------------------------------------------------------------" << std::endl;

        for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; ++pairNumber)
        {
            std::cout << TelCoColorCoder::GetColorFromPairNumber(pairNumber).ToString() << " " << pairNumber << std::endl;
            std::cout << "-------------------------------------------------------------------" << std::endl;
        }
    }
}