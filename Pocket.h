#ifndef POCKET_H
#define POCKET_H

#include <iostream>
#include <string>

using namespace std;

class Pocket{
public:
	Pocket(string v) :value{ v }{}
	Pocket(){}
	~Pocket(){}

	string getValue() const{
		return value;
	}

	string operator ()() const{
		return value;
	}

	friend ostream& operator << (ostream& os, Pocket& p){
		return os << p();
	}

private:
	string value;
};

#endif // !POCKET_H