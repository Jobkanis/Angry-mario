#ifndef DRAW_INFORMATION
#define DRAW_INFORMATION
#include "Vec3D.h"

enum DrawType { d_NONE , d_BRICK };
enum UpdateType { u_NONE, u_PLATFORM, u_REGULAR };

class ObjectInformation {
private:
	void convertDrawSettings();

// GENERAL
	Size size = Size(1.0f, 1.0f);
	Position position = Position(0.0f, 0.0f);

// DRAW
	DrawType drawType = DrawType(d_NONE);
	DrawSize drawSize = DrawSize(1.0f, 1.0f);
	DrawPosition drawPosition = DrawPosition(1.0f, 1.0f);
	Color color = Color(1.0f, 0.0f, 0.5f);

// UPDATE
	UpdateType updateType = UpdateType(u_NONE);
	Direction direction = Direction(0.0f, 1.0f);
	float speed = 0.0f; // position change per second

public:

// CONSTRUCTOR
	ObjectInformation();
	ObjectInformation(Position i_position, Size i_size);
	ObjectInformation(Position i_position, Size i_size, DrawType i_drawType, UpdateType i_updateType);

// FUNCTIONALITY
	ObjectInformation copy();

// GENERAL
	Size getSize();
	void setSize(Size i_size);
	
	Position getPosition();
	void setPosition(Position i_position);

// DRAW
	DrawType getDrawType();
	void setDrawType(DrawType i_drawType);

	DrawSize getDrawSize();
	void setDrawSize(DrawSize i_drawSize);

	DrawPosition getDrawPosition();
	void setDrawPosition(DrawPosition i_drawPosition);

	Color getColor();
	void setColor(Color i_color);

// UPDATE
	UpdateType getUpdateType();
	void setUpdateType(UpdateType i_updateType);

	Direction getDirection();
	void setDirection(Direction i_direction);

	float getSpeed();
	void setSpeed(float i_speed);

// GENERAL MATHEMATICS
	void multiplyPosition(float i_multiplier);
	void multiplyPosition(Position i_position);

	void dividePosition(float i_devider);
	void dividePosition(Position i_position);

	void addPosition(float i_addition);
	void addPosition(Position i_position);

	void substractPosition(float i_substraction);
	void substractPosition(Position i_position);

	void addSize(Size i_size);
	void addSize(float i_addition);

	void multiplySize(Size i_size);
	void multiplySize(float i_multiplier);

	void divideSize(Size i_size);
	void divideSize(float i_devider);

	void substractSize(Size size);
	void substractSize(float i_substract);
};
#endif