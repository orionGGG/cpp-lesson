#include <iostream>

void change(int x)//pass by value
//�β���ʵ�δ����ڲ�ͬλ��,����ͨ���������,�βεĸı䲢��Ӱ��ʵ��
{
	x = 333;
}

void changed(int* p)//pass by pointer
//ͨ��ָ���������ʵ��
{
	*p = 333;
}
void changedd(int a[])//decay to a pointer
//����˥��Ϊָ��,�ⲿ��������ʵ��
{
	a;
	//only see it as a pointer to the firse element
}

void change_able(int& a)//pass by reference
//ʵ�����βν�������ͬ���ڴ�����,Ҳ����ֱ�ӵ���ʵ��,����ʵ��,�������β���ʵ�εı���
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