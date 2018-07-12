#include "GameInformation.h"

inline GameInformation::GameInformation() {
	mapInformation = MapInformation();	}

inline void GameInformation::draw(float i_frameTime) {
	mapInformation.draw(i_frameTime);
}

inline void GameInformation::update(float i_frameTime) {
	mapInformation.update(i_frameTime);
}