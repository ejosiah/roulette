#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <random>

using namespace std;

class Randomizer{
public:
	Randomizer(int low, int high) :dist(low, high){}
	~Randomizer(){}

	int operator ()(){
		return dist(engine);
	}

private:
	default_random_engine engine;
	uniform_int_distribution<int> dist;
};

#endif // !RANDOMIZER_H
