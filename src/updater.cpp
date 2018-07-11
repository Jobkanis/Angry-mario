#include "updater.h"

void gravity(float time, ObjectInformation objectInformation) {

}

void move(float time, ObjectInformation objectInformation) {

}

void generalUpdate(float time, ObjectInformation objectInformation) {
	move(time, objectInformation);
	gravity(time, objectInformation);
}