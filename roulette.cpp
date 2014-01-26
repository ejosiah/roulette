// roulette.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Wheel.h"
#include <string>
#include "BetType.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string strips = "0-32-15-19-4-21-2-25-17-34-6-27-13-36-11-30-8-23-10-5-24-16-33-1-20-14-31-9-22-18-29-7-28-12-35-3-26";
	Wheel wheel(strips);
	
	for (int i = 0; i < 10; i++){
		cout << "spin " << i << ": " << wheel.spin() << endl;
	}

	BetType betType(1, BetType::STRAIGHT, BetType::INSIDE);

	cin.get();
	return 0;
}

