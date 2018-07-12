#include "DrawableObjectFactory.h"

DrawableObject DrawableObjectFactory::getRegularBrick(Position position) {

// regular constructor
	Size size = Size(1, 1);
	DrawType drawType = d_BRICK;
	UpdateType updateType = u_PLATFORM;
	ObjectInformation objectInformation = ObjectInformation(position, size, drawType, updateType);

// construct
	DrawableObject object = DrawableObject(objectInformation);

// edit

// return
	return object;
}