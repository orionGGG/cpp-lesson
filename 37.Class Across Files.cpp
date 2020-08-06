#include <iostream>
#include<vector>
#include<string>
#include"position.h"

int main()
{
	Position pos1, pos2;
	Position pos3 = pos1 + pos2;
	Position pos;
	std::cin >> pos;
	std::cout << pos3.x << "\t" << pos3.y << std::endl;
	std::cout << pos << std::endl;

	if (pos1 == pos2)
	{
		std::cout << "They are the same." << std::endl;
		std::cout << "It's too hard." << std::endl;
		std::cout << "O.O" << std::endl;
	}
	std::cout << pos3 << std::endl;
	output_name(pos);
}