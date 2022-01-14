#ifndef TESTCOLORPAIR_H
#define TESTCOLORPAIR_H

#include <stdio.h>
#include <assert.h>

typedef enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET} MajorColor_type;
typedef enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE} MinorColor_type;

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const int MAX_COLORPAIR_NAME_CHARS = 16;

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void testNumberToPair(int pairNumber,    MajorColor expectedMajor,     MinorColor expectedMinor);
extern void testPairToNumber(     MajorColor major,     MinorColor minor,     int expectedPairNumber);

#endif

