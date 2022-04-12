#pragma once
#include "Square.h"

class Tile : public Square
{
public:

	bool getFill();
	void setFill(bool newFill);
private:
	bool fill;
};

bool Tile::getFill()
{
	return fill;
}
void Tile::setFill(bool newFill)
{
	fill = newFill;
}