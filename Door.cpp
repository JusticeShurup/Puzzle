#include "Door.h"

Door::Door(std::vector<int> leverage_combination) {
	this->leverage_combination = leverage_combination;
	open = false;
}

bool Door::checkCombination(std::vector<int> combination) {
	for (int i = 0; i < leverage_combination.size(); i++)
		if (leverage_combination[i] != combination[i]) 
			return false;
}

void Door::setOpen(bool open) {
	this->open = open;
}

bool Door::isOpen() {
	return open;
}

void Door::setCombination(std::vector<int> combination) {
	this->leverage_combination = combination;
}

std::vector<int> Door::getCombination() {
	return leverage_combination;
}

void Door::addLastCombinationElement(int position) {
	leverage_combination.push_back(position);
}

void Door::deleteLever(int number) {
	leverage_combination.erase(leverage_combination.begin() + number);
}