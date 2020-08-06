#ifndef POSITION_H
#define POSITION_H
class Position
{
	std::string name = "gjl";
public:
	int x = 10;
	int y = 20;
	Position operator + (Position pos);
	bool operator ==(Position pos);
	
	friend void output_name(Position pos);
	friend std::ostream& operator <<(std::ostream& output, Position pos);
	friend std::istream& operator >>(std::istream& input, Position& pos);
};
#endif