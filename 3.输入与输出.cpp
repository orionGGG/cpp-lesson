#include<iostream>

int main()
{
	//区分cin与cout箭头方向的一个办法：数据的方向(传入or送出控制台)
	int a, b;
	b = 7;
	std::cout << "Yo fatty how many";
	std::cin >> a;
	//数据从控制台来传输到a中去
	std::cout << b << a << std::endl;
	//数据从b中传输到控制到并输出
	return 0;
	//cin与cout均为对象,cin是istream的实例,而cout是ostream的实例
	
	//区分大小写，缩进，自动忽略空格
}