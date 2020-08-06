#include <iostream>

/*�������ж���汾,��������ͬ
����������ͬ,������ͬ--->����
����ֻ�Ǵ���һ�������Ķ���汾
cpp�з������Ͳ���ȷ���ᱻ��Ϊ����
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

double pow1(double base, int pow = 2)//��ʾ���û����ڶ�������,��Ĭ��Ϊ2
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