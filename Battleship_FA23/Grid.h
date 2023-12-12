#ifndef GRID_H
#define GRID_H

class Grid
{
public:
	Grid();

	void getPlayerShipGrid(char grid[10][10]);

	void printAllGrids();

private:
	char playerShipGrid[10][10];
	char playerShotGrid[10][10];
	char computerShipGrid[10][10];
	char computerShotGrid[10][10];

	void printGrid(char grid[10][10]);
	void initializeGrid(char grid[10][10]);
};

#endif // !GRID_H
