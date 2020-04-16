#pragma once
//battleship parent class
#include <iostream>
using namespace std;
class battleship
{
public:
	battleship(int);
	~battleship();
	int firingpower; //function overload this into the other classes//
	virtual void fire() = 0; //pure virtual fuction; which makes this class abstract.//
protected:
private:
};

