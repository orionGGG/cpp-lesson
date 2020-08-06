#include<iostream>

using namespace std;

int main()
{
	/*auto关键字可以自动判断类型,类似var
	用auto定义变量时必须对其进行初始化，在编译阶段编译器需要根据初始化表达式来推导auto的实际类型。
	因此auto并非是一种“类型”的声明，而是一个类型声明时的“占位符”，
	编译器在编译期会将auto替换为变量实际的类型
	*/
	auto a = 6UL;
	cout << a << endl;
	auto a1 = "ads";

	int n1 = 30;//十进制30
	int n2 = 0x30;//十六进制
	int n3 = 030;//八进制
	cout << std::hex << n1 << endl;//以十六进制输出30
	cout << std::oct << n1 << endl;//以八进制输出30




}