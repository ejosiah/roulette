#ifndef WHEEL_H
#define WHEEL_H

#include "Pocket.h"
#include "Randomizer.h"
#include <string>

class Wheel{
public:
	static const int NUM_POCKETS = 37;

	Wheel(std::string strips);
	~Wheel();
	
	Pocket spin();

private:
	Pocket pockets[NUM_POCKETS];
	Randomizer spinner;
};
#endif // !WHEEL_H