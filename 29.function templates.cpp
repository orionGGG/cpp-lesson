#include <iostream>
#include <string>

template <typename T>
/*
����һ��var ������ô���,һ�������������б������͵ı���
ģ�廯�������Խ�ʡ��������,���Ұ����˲�������
*/

void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
//ÿ����һ����������Ҫ����ģ�廯
void swap(T a[], T b[], int size = 6)
{
	for (int i = 0; i < size; i++)
	{
		T temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	std::cout << "a: " << a << "\tb: " << b << std::endl;
	std::string first_name = "JL";
	std::string last_name = "GUI";
	swap(first_name, last_name);
	std::cout << "first_name: " << first_name << "\tlast_name: " << last_name << std::endl;

	int nines[] = { 9,9,9,9,9 };
	int ones[] = { 1,1,1,1,1 };
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";
	}
	swap(nines, ones, size);
	std::cout << "\n\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";
	}




}