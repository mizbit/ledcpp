#ifndef HELPERS_H
#define HELPERS_H

#include "Simplex.h"

const float pi = 3.14149;

float getRadius(int x, int y);
	
static float getAngle(int x, int y);

float clamp(float value, float min, float max);

float clamp(float value);

float fract(float value);

float modulo(float value, float divisor);

float map(float value, float oldLow, float oldHigh, float newLow, float newHigh);

float noise(float x, float y);

int getRing(int x, int y);

int getRingPosition(int x, int y);

#endif