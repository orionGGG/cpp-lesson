#include <iostream>
#include "math_utils.h"

/*
struct Rectangle
{
	double length;
	double width;
};
在头文件当中定义了,这里就可以删掉了
*/

double area(double length)//square
{
	std::cout << length * length << std::endl;
	return length * length;
}

double area(double length, double width)//rectangle
{
	std::cout << length * width << std::endl;
	return length * width;
}

double area(Rectangle rectangle)
{
	std::cout << rectangle.length * rectangle.width << std::endl;
	return rectangle.length * rectangle.width;
}

double area(std::string str)
{
	std::cout << str << std::endl;
	return 0;
}

void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << "\tb: " << b << std::endl;
}

void swap(std::string& a, std::string& b)
{
	std::string temp = a;
	a = b;
	b = temp;
}

double pow1(double base, int pow)
{
	double total = 1;
	for (int i = 0; i < pow; i++)
	{
		total *= base;
	}
	return total;
}