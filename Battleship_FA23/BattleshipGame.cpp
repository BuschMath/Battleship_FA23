#include "BattleshipGame.h"
#include <iostream>

BattleshipGame::BattleshipGame()
{
	initializeFleet(playerFleet);
	initializeFleet(computerFleet);
}

void BattleshipGame::placeShip()
{
	std::cout << "Place " << playerFleet[0].getName() << std::endl;
	std::cout << "Enter starting coordinates (x, y): ";
	int x, y;
	std::cin >> x >> y;
	std::cout << "Enter direction (0 = vertical, 1 = horizontal): ";
	int direction;
	std::cin >> direction;

	playerFleet[0].setXLoc(x);
	playerFleet[0].setYLoc(y);
	playerFleet[0].setIsHorizontal(bool(direction));

	char playerShipGrid[10][10];

	gameGrid.getPlayerShipGrid(playerShipGrid);

	if (playerFleet[0].getIsHorizontal())
	{
		for (int i = 0; i < playerFleet[0].getLength(); i++)
		{
			playerShipGrid[y][x + i] = '#';
		}
	}
	else
	{
		for (int i = 0; i < playerFleet[0].getLength(); i++)
		{
			playerShipGrid[y + i][x] = '#';
		}
	}
}

void BattleshipGame::printAllGrids()
{
	gameGrid.printAllGrids();
}

void BattleshipGame::initializeFleet(Ship fleet[5])
{
	fleet[0].setName("Carrier");
	fleet[0].setHp(5);
	fleet[0].setLength(5);

	fleet[1].setName("Battleship");
	fleet[1].setHp(4);
	fleet[1].setLength(4);

	fleet[2].setName("Cruiser");
	fleet[2].setHp(3);
	fleet[2].setLength(3);

	fleet[3].setName("Submarine");
	fleet[3].setHp(3);
	fleet[3].setLength(3);

	fleet[4].setName("Destroyer");
	fleet[4].setHp(2);
	fleet[4].setLength(2);
}
