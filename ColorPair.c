#include "ColorPair.h"
#define MAX_COLORPAIR_NAME_CHARS  16

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

const char * MinorColorToString(MinorColor_type minorcolor)
{
    return (MinorColorNames[minorcolor]);
}

const char * MajorColorToString(MajorColor_type majorcolor )
{
    return (MajorColorNames[majorcolor]);
}

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorToString(colorPair->majorColor),
        MinorColorToString(colorPair->minorColor));
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor_type)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (MinorColor_type)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
