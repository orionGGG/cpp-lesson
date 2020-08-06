#include<iostream>
#include<array>

void print_array(std::array<int, 5> &arr)
//同向量一样可以通过&来使得函数可以改变main函数中的参数
{
	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << "\n";
}

int main()
{

	//templatized array
	std::array <int, 5> ages = { 1,2,3 };
	ages[0];
	std::cout << ages.size() << std::endl;
	print_array(ages);

	/*
	statically sized
	数组传递给函数时得另外输入数组的大小,向量则不用
	数组作为指针传递给函数,向量按值传递
	*/
	return 0;
}