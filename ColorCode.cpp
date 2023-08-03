#include "ColorCode.h"

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

    std::string FormatColorCodeString(const int pairNumber, std::string colorPair) {
        const int formatedStringSize = 50;
        char formatedString[formatedStringSize] = "";

        std::string majorColor = colorPair.substr(0, colorPair.find_first_of(" "));
        std::string minorColor = colorPair.substr(colorPair.find_first_of(" "), colorPair.length());

        sprintf_s(formatedString, formatedStringSize, "%-12s%-14s%-12s", std::to_string(pairNumber).data(), majorColor.data(), minorColor.data());
        return formatedString;
    }

    std::vector<std::string> PrintTelcoColorCodeReferenceManual() {
        std::vector<std::string> telcoColorCodeList = {};

        telcoColorCodeList.push_back("--------------------------------------");
        telcoColorCodeList.push_back("Pair no.    Major color    Minor color");
        telcoColorCodeList.push_back("--------------------------------------");

        std::cout << telcoColorCodeList[0] << std::endl;
        std::cout << telcoColorCodeList[1] << std::endl;
        std::cout << telcoColorCodeList[2] << std::endl;

        for(int pairNumber = 1; pairNumber < numberOfMajorColors*numberOfMinorColors; ++pairNumber)
        {
            std::string telcoColorCode = FormatColorCodeString(pairNumber, GetColorFromPairNumber(pairNumber).ToString());
            telcoColorCodeList.push_back(telcoColorCode);
            std::cout << telcoColorCode << std::endl;
        }
        return telcoColorCodeList;
    }
}