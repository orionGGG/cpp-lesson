#include <iostream>
#include <vector>

void do_something(const int data)
{

}

void print_array(int data[], int size)//const in data[]可以确保在函数内data不会改变
//由于函数调用数组时,数组会衰减为指针,所以改变函数内的会改变main中的数组
//数组默认情况下可以再其他函数中进行修改,其他(基本类型,向量)默认情况下不可修改
{
	for (int i = 0; i < size; i++)
	{
		data[i]++;
		std::cout << data[i] << "\t";
	}
	std::cout << "\n";
}


int main()
{
	int data[] = { 1,2,3 };
	print_array(data,3);
	std::cout << data[0];

}