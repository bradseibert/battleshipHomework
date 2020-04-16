#include "Malthy.h"

Malthy::Malthy(int fp) : battleship(fp)
{
	//cout << "Malthy constructor runs" << endl;
}
Malthy::~Malthy()
{
	//dstor
}
void Malthy::fire()
{
	cout << "Malthy fires proton gun & laser gun! firing power: " << firingpower << endl;
}