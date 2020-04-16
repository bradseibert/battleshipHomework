#include "battleship.h"

battleship::battleship(int fp)
{
	
	firingpower = fp;
	//cout << "battleship constructor runs" << endl;
}
battleship::~battleship()
{
	//dtor
}
void battleship::fire()
{
	cout << "base class fires" << endl;
}