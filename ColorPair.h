#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS  16

typedef enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET} MajorColor_type;
typedef enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE} MinorColor_type;

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};




typedef struct {
    MajorColor_type majorColor;
    MinorColor_type minorColor;
} ColorPair;

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);

extern const char * MinorColorToString(MinorColor_type minorcolor);
extern const char * MajorColorToString(MajorColor_type majorcolor );


#endif
