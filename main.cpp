

#include <iostream>
#include "battleship.h"
#include "Dolthy.h"
#include "Jalthy.h"
#include "Malthy.h"
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << "----------------" << endl;
    battleship* arrayOfShips[3];
    arrayOfShips[0] = new Malthy(44);
    arrayOfShips[1] = new Jalthy(22);
    arrayOfShips[2] = new Dolthy(22);

    for (int i = 0; i < 3; i++)
    {
        arrayOfShips[i]->fire();
    }
    //battleship lol(69); //error because cannot make an object from abstract class.//
}


