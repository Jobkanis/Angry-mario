#ifndef DRAWABLEOBJECT
#define DRAWABLEOBJECT
#include "ObjectInformation.h"
#include "drawer.h"
#include "updater.h"

class DrawableObject {

	ObjectInformation objectI;

	ObjectInformation getObjectInformation() {
		return objectI;
	}

	void setObjectInformation(ObjectInformation di) {
		objectI = di.copy();
	}

	void draw(float frameTime) {
		generalDraw(frameTime, getObjectInformation());
	}
	void update(float frameTime) {
		generalUpdate(frameTime, getObjectInformation());
	}
};

#endif