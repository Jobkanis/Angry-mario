#include "DrawableObjectFactory.h"

DrawableObject DrawableObjectFactory::getRegularBrick(Position position) {

// regular constructor
	Size size = Size(1, 1);
	DrawType drawType = d_BRICK;
	UpdateType updateType = u_PLATFORM;
	ObjectInformation objectInformation = ObjectInformation(position, size, drawType, updateType);


	// edit

	Color color = getColor(165, 42, 42); // brown
	objectInformation.setColor(color);

// construct
	DrawableObject object = DrawableObject(objectInformation);

// return
	return object;
}