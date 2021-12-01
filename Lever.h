#ifndef _LEVER_H_
#define _LEVER_H_
class Lever
{
public:
	Lever(int pos);

	void setPos(int pos);
	int getPos();

private: 
	int pos;
};
#endif


