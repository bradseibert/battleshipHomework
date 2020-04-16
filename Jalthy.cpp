#include "Jalthy.h"

Jalthy::Jalthy(int fp) : battleship(fp)
{
	//cout << "Jalthy constructor runs" << endl;
}
Jalthy::~Jalthy()
{
	//dstor
}
void Jalthy::fire()
{
	cout << "Jalthy fires proton gun! firing power: " << firingpower << endl;
}
