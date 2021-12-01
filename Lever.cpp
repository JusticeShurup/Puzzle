#include "Lever.h"

Lever::Lever(int pos)
{
	this->pos = pos;
}

void Lever::setPos(int pos) {
	this->pos = pos;
}

int Lever::getPos() {
	return pos;
}