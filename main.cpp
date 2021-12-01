#include <iostream>
#include "Room.h"

int main() {
	Room room;
	room.addLever(Lever(-1));
	room.addLever(Lever(1));
	room.addLever(Lever(1));
	room.addDoor(Door(std::vector<int>{1, 2, 3}));
	room.addDoor(Door(std::vector<int>{1, 2, 2}));
	room.addDoor(Door(std::vector<int>{1, 2, 2}));
	room.tryOpenDoor();
}