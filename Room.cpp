#include "Room.h"
#include <iostream>

void Room::printDoorCombination(std::vector<int> combination) {
	for (int i = 0; i < combination.size(); i++) {
		std::cout << combination[i] << " ";
	}
	std::cout << std::endl;
}

void Room::printLeversPositions(std::vector<Lever> levers) {
	for (auto& lever : levers) {
		std::cout << lever.getPos() << " ";
	}
	std::cout << std::endl;
}

Room::Room() {}

void Room::addLever(Lever lever) {
	if (lever.getPos() >= 1 && lever.getPos() <= 10) {
		levers.push_back(lever);
	}
	else {
		std::cout << "Can't add lever: incorrect position" << std::endl;
	}
}

void Room::addDoor(Door door) {
	if (doors.size() < pow(10, levers.size())) {
		if (door.getCombination().size() == levers.size()) {
			if (!isCombinationUsed(door.getCombination())) {
				doors.push_back(door);
			}
			else {
				std::cout << "Can't add door: this combination is used" << std::endl;
			}
		}
		else {
			std::cout << "Can't add door: door's combination more than number of levers " << std::endl;
		}
	}
	else {
		std::cout << "Can't add door: doors more than levers positions" << std::endl;
	}
}

void Room::setLeverPosition(int lever_number, int pos) {
	if (pos >= 1 && pos <= 10) {
		levers[lever_number] = pos;
	}
	else {
		std::cout << "incorrect position" << std::endl;
	}
}

void Room::setCombinationForDoor(std::vector<int> combination, int door_number) {
	if (!isCombinationUsed(combination)) {
		doors[door_number].setCombination(combination);
	}
	else {
		std::cout << "This combination is used" << std::endl;
	}
}

void Room::tryOpenDoor() {
	bool flag = true;

	for (int i = 0; i < doors.size(); i++) {
		if (levers.size() == doors[i].getCombination().size()) {
			flag = true;
			for (int j = 0; j < levers.size(); j++) {
				if (doors[i].getCombination()[j] != levers[j].getPos()) {
					flag = false;
					break;
				}
			}
		}
		else {
			flag = false;
		}
		if (flag) {
			std::cout << "door number " << i+1 << " opened" << std::endl;
			return;
		}
	}

	std::cout << "No one door is opened" << std::endl;
}

bool Room::isCombinationUsed(std::vector<int> combination) {
	if (doors.size() == 0) return false;
	bool flag = true;
	for (int i = 0; i < doors.size(); i++) {
		flag = true;
		for (int j = 0; j < doors[i].getCombination().size(); j++) {
			if (doors[i].getCombination()[j] != combination[j]) {
				flag = false;
				break;
			}
		}
	}
	return flag;
}