#ifndef BATTLESHIPGAME_H
#define BATTLESHIPGAME_H

#include "Grid.h"
#include "Ship.h"

class BattleshipGame
{
public:
	BattleshipGame();

	void placeShip();

	void printAllGrids();

private:
	Grid gameGrid;
	Ship playerFleet[5];
	Ship computerFleet[5];

	void initializeFleet(Ship fleet[5]);
};

#endif // !BATTLESHIPGAME_H
