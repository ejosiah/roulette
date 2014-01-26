#include "stdafx.h"
#include "Wheel.h"
#include "utility.h"
#include <vector>

using namespace std;

Wheel::Wheel(string strips):spinner(0, 36){
	vector<string> symbols = split(strips, '-');

	for (int i = 0; i < NUM_POCKETS; i++){
		pockets[i] = symbols[i];
	}
}

Wheel::~Wheel(){}

Pocket Wheel::spin() {
	return pockets[spinner()];
}
