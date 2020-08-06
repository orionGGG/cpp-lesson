#include <iostream>

void change(int x)//pass by value
//形参与实参储存在不同位置,调用通过复制完成,形参的改变并不影响实参
{
	x = 333;
}

void changed(int* p)//pass by pointer
//通过指针可以引用实参
{
	*p = 333;
}
void changedd(int a[])//decay to a pointer
//数组衰减为指针,外部函数引用实参
{
	a;
	//only see it as a pointer to the firse element
}

void change_able(int& a)//pass by reference
//实参与形参将引用相同的内存区域,也就是直接调用实参,引用实参,在这里形参是实参的别名
{
	a = 1711;
}

void swap(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 5;
	int x1 = 5;
	int x2 = 5;
	int* p = &x1;
	change(x);
	std::cout << x << std::endl;
	changed(&x1);
	std::cout << *p << std::endl;
	change_able(x2);
	std::cout << x2 << std::endl;
	int a = 15;
	int b = 77;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	swap(a, b);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
}