#ifndef GAMEINFORMATION
#define GAMEINFORMATION
#include "MapFactory.h"

class GameInformation {
private:
	MapInformation mapInformation;

public:
	GameInformation();

	void draw(float i_frameTime);
	void update(float i_frameTime);
};

#endif
