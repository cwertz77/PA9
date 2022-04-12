#pragma once
#include "Tile.h"
class Board
{
public:
	Board();
private:
	Tile board[100][100];
	void check_board(Tile board[][]);
	int check_surrounding(Tile* current_tile, int row, int col);
};
Board::Board()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			board[i][j].setFill(false);
		}
	}
}
void Board::check_board(Tile board[][])
{
	Tile newboard[100][100];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			int num_surrounding = check_surrounding(board[i][j], i, j);
			if (num_surrounding == 0 && board[i][j].getFill == true)
			{
				newboard[i][j].setFill(false);
			}
			else
			{
				newboard[i][j] = board[i][j];
			}
		}
	}
}
// check surrounding
int Board::check_surrounding(Tile* current_tile, int row, int col)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ()
		}
	}
}
