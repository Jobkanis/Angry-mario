#ifndef DRAWABLEOBJECTFACTORY
#define DRAWABLEOBJECTFACTORY
#include "DrawableObject.h"
#include "ObjectGenerator.h"

class DrawableObjectFactory {
	DrawableObject getRegularBrick(Position i_position);
};

#endif