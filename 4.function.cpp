#include<iostream>
#include<cmath>


//put the function declare first before we call it

int multiply(int x, int y)//function declaration and definition
{
	return x * y;
}

int change(int);//declaration�����ӾͿ��Խ������������main�����棬���ӷ���
//���û�������������ô���ڵײ��Ķ���ĺ������޷���������


void unchange(int x)//����ͨ���ı��β����ı�ʵ��,ʵ�����β�Ϊ���������ı���,����ʹ��reference
{
	x = 7;
}

void print_p(double a,int x, int y, int z)//void
{
	std::cout << a << std::endl;
	std::cout << multiply(3, 4) << std::endl;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
}

int main()//root
{
	double a = pow(10, 2) * 2;
	int x = 5;
	int y = 5;
	int z = 5;
	x = multiply(x, 2);//calling
	y = change(y);
	unchange(z);
	print_p(a, x, y, z);
	return 0;
}

int change(int x)//definition
{
	return 7;
}