#include<iostream>
#include<cmath>

int main()
{
	std::cout << sqrt(25) << std::endl;//平方根函数
	std::cout << sqrt(-25) << std::endl;//nan
	std::cout << NAN << std::endl;//nan
	std::cout << pow(9, 999) << std::endl;//infinity
	std::cout << INFINITY << std::endl;//infinity
	std::cout << -INFINITY << std::endl;//-infinity


	std::cout << remainder(-9, 5) << std::endl;//取余
	std::cout << fmod(-9, 5) << std::endl;//取模
	std::cout << -9 % 5 << std::endl;//取模运算符，编程中余数不遵循数学中的大于0的定义
	/*
	取余，遵循尽可能让余数的绝对值小的原则，结果符号与除数相同
	取模，遵循尽可能让商小的原则
	*/

	std::cout << fmax(10.1, 3.25) << std::endl;//比较大小
	std::cout << ceil(fmax(10.1, 3.25)) << std::endl;//比较大小，结果向上取整
	std::cout << floor(fmax(10.1, 3.25)) << std::endl;//比较大小，结果向下取整
	std::cout << trunc(fmax(10.1, 3.25)) << std::endl;//比较大小，结果向下取整
	std::cout << fmin(10.1, 3.25) << std::endl;//比较大小
	std::cout << trunc(-1.5) << "\t" << floor(-1.5) << std::endl;//trunc与floor区别
	//floor取更小的，trunc直接抹去小数
	std::cout << round(-1.5) << "\t" << round(-1.49) << std::endl;//round四舍五入




}