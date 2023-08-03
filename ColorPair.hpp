#ifndef COLORPAIR_HPP
#define COLORPAIR_HPP

#include <iostream>
#include <string>
#include "ColorPairConstants.h"

namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    class ColorPair
    {
        private:
            // Member variables
            MajorColor majorColor;
            MinorColor minorColor;

        public:
            // Constructor
            ColorPair(MajorColor major, MinorColor minor);

            // Destructor
            ~ColorPair();

            // Return major color
            MajorColor getMajor();

            // Return minor color
            MinorColor getMinor();

            // Return color pair to string
            std::string ToString();
    };
}
#endif // !COLORPAIR_HPP