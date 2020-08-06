#ifndef MATH_UTILS//ifndef if not define 变量未定义时为真
#define MATH_UTILS

//我们要注意为了不多次编译头文件,需要使用头文件保护符
struct Rectangle
{
	double length;
	double width;
};

double area(double length);

double area(double length, double width);

double area(Rectangle rectangle);

double area(std::string str);

void swap(double& a, double& b);

void swap(std::string& a, std::string& b);

double pow1(double base, int pow = 2);//表示如果没输入第二个参数,则默认为2

#endif