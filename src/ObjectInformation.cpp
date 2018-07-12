#include "ObjectInformation.h";

// UPDATE

///////////////////////////////////////////////////////////////////////
/// CONSTRUCTOR /////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

ObjectInformation::ObjectInformation() {

}

ObjectInformation::ObjectInformation(Position i_position, Size i_size) {
	setPosition(i_position);
	setSize(i_size);
}

ObjectInformation::ObjectInformation(Position i_position, Size i_size, DrawType i_drawType, UpdateType i_updateType) {
	setPosition(i_position);
	setSize(i_size);
	setDrawType(i_drawType);
	setUpdateType(i_updateType);
}

///////////////////////////////////////////////////////////////////////
/// FUNCTIONALITY//////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////


// GENERAL
ObjectInformation ObjectInformation::copy() {
	return ObjectInformation(size, position);
}

// DRAW
void ObjectInformation::convertDrawSettings() {
	// add conver logic here: we now keep a ratio of 1 x 1
	drawPosition = DrawPosition(position[0], position[1], position[2]);
	drawSize = DrawSize(size[0], size[1], size[2]);
}

///////////////////////////////////////////////////////////////////////
/// GETS //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

// GENERAL
Position ObjectInformation::getPosition() {
	return position;
}

Size ObjectInformation::getSize() {
	return size;
}

// DRAW
DrawType ObjectInformation::getDrawType() {
	convertDrawSettings();
	return drawType;
}

DrawPosition ObjectInformation::getDrawPosition() {
	convertDrawSettings();
	return drawPosition;
}

DrawSize ObjectInformation::getDrawSize() {
	convertDrawSettings();
	return drawSize;
}

Color ObjectInformation::getColor() {
	return color;
}

// UPDATE
UpdateType ObjectInformation::getUpdateType() {
	return updateType;
}

Direction ObjectInformation::getDirection() {
	return direction;
}

float ObjectInformation::getSpeed() {
	return speed;
}

///////////////////////////////////////////////////////////////////////
/// SETS //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

// GENERAL
void ObjectInformation::setSize(Size i_size) { 
	size = i_size.copy(); 
}

void ObjectInformation::setPosition(Position i_position) { 
	position = i_position.copy(); 
}

// DRAW
void ObjectInformation::setDrawType(DrawType i_drawType) { 
	drawType = i_drawType; 
}

void ObjectInformation::setDrawSize(DrawSize i_drawSize) { 
	drawSize = i_drawSize.copy(); 
}

void ObjectInformation::setDrawPosition(DrawPosition i_drawPosition) { 
	drawPosition = i_drawPosition.copy(); 
}

void ObjectInformation::setColor(Color i_color) {
	color = i_color.copy();
}

// UPDATE
void ObjectInformation::setUpdateType(UpdateType i_updateType) { 
	updateType = i_updateType; 
}

void ObjectInformation::setDirection(Direction i_direction) { 
	direction = i_direction.copy(); 
}

void ObjectInformation::setSpeed(float i_speed) { 
	speed = i_speed; 
}

///////////////////////////////////////////////////////////////////////
/// GENERAL MATHEMATICS ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

// mathmatics
void ObjectInformation::multiplyPosition(float i_multiplier) { // only index 0, 1
	position = Position(position[0] * i_multiplier, position[1] * i_multiplier, position[2]);
}
void ObjectInformation::dividePosition(float i_divider) {  // only index 0, 1
	position = Position(position[0] * i_divider, position[1] * i_divider, position[2]);
}
void ObjectInformation::addPosition(float i_addition) { // only index 0, 1
	position = Position(position[0] + i_addition, position[1] + i_addition, position[2]);
}
void ObjectInformation::substractPosition(float i_substraction) { // only index 0, 1
	position = Position(position[0] - i_substraction, position[1] - i_substraction, position[2]);
}
void ObjectInformation::addSize(float i_addition) {  // only index 0, 1
	size = Size(size[0] + i_addition, size[1] + i_addition, size[2]);
}
void ObjectInformation::substractSize(float i_substraction) {  // only index 0, 1
	size = Size(size[0] - i_substraction, size[1] - i_substraction, size[2]);
}
void ObjectInformation::multiplySize(float i_multiplier) { // only index 0, 1
	size = Size(size[0] * i_multiplier, size[1] * i_multiplier, size[2]);
}
void ObjectInformation::divideSize(float i_division) {  // only index 0, 1
	size = Size(size[0] / i_division, size[1] / i_division, size[2]);
}
void ObjectInformation::multiplyPosition(Position i_position) {
	position = Position(position[0] * i_position[0], position[1] * i_position[1], position[2] * i_position[2]);
}
void ObjectInformation::dividePosition(Position i_position) {
	position = Position(position[0] / i_position[0], position[1] / i_position[1], position[2] / i_position[2]);
}
void ObjectInformation::addPosition(Position i_position) {
	position = position.copy() + i_position;
}
void ObjectInformation::substractPosition(Position i_position) {
	position = position.copy() - i_position;
}
void ObjectInformation::addSize(Size i_size) {
	size = size.copy() + i_size;
}
void ObjectInformation::substractSize(Size i_size) {
	size = size.copy() - i_size;
}
void ObjectInformation::multiplySize(Size i_size) {
	size = size.copy() * i_size;
}
void ObjectInformation::divideSize(Size i_size) {
	size = Size(size[0] / i_size[0], size[1] / i_size[1], size[2] / i_size[2]);
}
