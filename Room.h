#ifndef _ROOM_H_
#define _ROOM_H_
#include "Lever.h"
#include "Door.h"

class Room
{
public:
	Room();

	void printLeversPositions(std::vector<Lever> levers);
	void printDoorCombination(std::vector<int> combination);


	void addLever(Lever lever);
	void addDoor(Door door);

	void setLeverPosition(int lever_number, int pos);
	void setCombinationForDoor(std::vector<int> combination, int door_number);

	void tryOpenDoor();
	
	bool isCombinationUsed(std::vector<int> combination);


private:
	std::vector<Lever> levers;
	std::vector<Door> doors;
	std::vector<std::vector<int>> coominations;
};
#endif
