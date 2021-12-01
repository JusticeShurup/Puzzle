#ifndef _DOOR_H_
#define _DOOR_H_
#include <vector>

class Door
{
public: 
	Door(std::vector<int> leverage_combination);

	bool checkCombination(std::vector<int> combination);

	void setOpen(bool open);
	bool isOpen();

	void setCombination(std::vector<int> combination);
	std::vector<int> getCombination();
	void addLastCombinationElement(int position);
	void deleteLever(int number);

private:
	std::vector<int> leverage_combination;
	bool open;
};
#endif
