#include "Dolthy.h"

Dolthy::Dolthy(int fp) : battleship(fp)
{
	//cout << "dolthy constructor runs" << endl;
}
Dolthy::~Dolthy()
{
	//dstor
}
void Dolthy::fire()
{
	cout << "Dolthy fires laser gun! Damage: "<< firingpower << endl;
}

