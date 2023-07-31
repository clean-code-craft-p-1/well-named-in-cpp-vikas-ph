#ifndef GLOBAL_H
#define GLOBAL_H

namespace TelCoColorCoder
{
    static const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    static int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    static const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

    static int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}

#endif // GLOBAL_H