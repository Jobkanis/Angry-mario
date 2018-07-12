#ifndef DRAWABLEOBJECT
#define DRAWABLEOBJECT
#include "ObjectInformation.h"
#include "drawer.h"
#include "updater.h"

class DrawableObject {
private:
	ObjectInformation objectInformation;
public:
	DrawableObject(ObjectInformation i_objectInformation);

	ObjectInformation getObjectInformation();

	void setObjectInformation(ObjectInformation i_objectInformation);

	void draw(float i_frameTime);

	void update(float i_frameTime);
};

#endif