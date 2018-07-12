#include "ObjectGenerator.h"

Color getColor(int i_red, int i_green, int i_blue) {
	float red = 255.0f / ((float)i_red);
	float green = 255.0f / ((float)i_green);
	float blue = 255.0f / ((float)i_blue);
	return Color(red, green, blue);
}