#include "DrawableObject.h"

DrawableObject::DrawableObject(ObjectInformation i_objectInformation) {
	setObjectInformation(i_objectInformation);
}

inline ObjectInformation DrawableObject::getObjectInformation() {
	return objectInformation;
}

inline void DrawableObject::setObjectInformation(ObjectInformation i_objectInformation) {
	objectInformation = i_objectInformation;
}

inline void DrawableObject::draw(float i_frameTime) {
	generalDraw(i_frameTime, getObjectInformation());
}

inline void DrawableObject::update(float i_frameTime) {
	generalUpdate(i_frameTime, getObjectInformation());
}