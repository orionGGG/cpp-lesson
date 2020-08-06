#include <iostream>

/*函数具有多个版本,但名称相同
函数名称相同,参数不同--->重载
重载只是创建一个函数的多个版本
cpp中返回类型不正确不会被视为重载
*/

struct Rectangle
{
	double length;
	double width;
};

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

double pow1(double base, int pow = 2)//表示如果没输入第二个参数,则默认为2
{
	double total = 1;
	for (int i = 0; i < pow; i++)
	{
		total *= base;
	}
	return total;
}

int main()
{
	area(5);
	area(5, 3);
	area("rua");
	double a = 10;
	double b = 20;
	swap(a, b);
	std::string first_name = "JL";
	std::string last_name = "GUI";
	swap(first_name, last_name);
	std::cout << "first_name: " << first_name << "\tlast_name: " << last_name << std::endl;
	Rectangle rectangle;
	rectangle.length = 10;
	rectangle.width = 10;
	area(rectangle.width, rectangle.length);
	area(rectangle.length);
	area(rectangle);
	std::cout << pow1(3, 3) << std::endl;
	std::cout << pow1(3) << std::endl;
}