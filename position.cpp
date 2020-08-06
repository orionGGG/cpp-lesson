#include <iostream>
#include<vector>
#include<string>
#include"position.h"

	Position Position::operator + (Position pos)
	{
		Position new_pos;
		new_pos.x = this->x + pos.x;
		new_pos.y = this->y + pos.y;
		return new_pos;
	}
	bool Position::operator ==(Position pos)
	{
		if (this->x == pos.x && this->y == pos.y)
		{
			return true;
		}
		return false;
	}

void output_name(Position pos)
{
	std::cout << pos.name;
}




std::ostream& operator <<(std::ostream& output, Position pos)
{
	output << "x: " << pos.x << "\t" << "y: " << pos.y;
	return output;
}

std::istream& operator >>(std::istream& input, Position& pos)
{
	input >> pos.x >> pos.y;
	return input;
}