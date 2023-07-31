#include "ColorPair.hpp"

namespace TelCoColorCoder
{
    ColorPair::ColorPair(MajorColor major, MinorColor minor): majorColor(major), minorColor(minor)
    {
        // Do nothing here
    }

    ColorPair::~ColorPair()
    {
        // Do nothing here
    }

    // Return major color
    MajorColor ColorPair::getMajor()
    {
        return majorColor;
    }

    // Return minor color
    MinorColor ColorPair::getMinor()
    {
        return minorColor;
    }

    // Get color pair names to string
    std::string ColorPair::ToString()
    {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }
}