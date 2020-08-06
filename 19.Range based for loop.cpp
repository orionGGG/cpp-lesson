#include<iostream>
#include<vector>
#include<array>


int main()
{
	//利用增强型for循环可以更加容易地遍历集合中的所有元素
	int data[] = { 1,2,3,4,5,6,7 };

	for (int temp : data)
	//要说每个元素的类型,并创建一个新变量来临时储存这些元素中的每一个 : 从哪里得到这些元素
	{
		std::cout << temp << "\t";
	}
	std::cout << "\n";

	for (int i = 0; i < 7; i++)
	{
		std::cout << data[i] << "\t";
	}
	std::cout << "\n";

	std::vector<int> vec = { 11,21,31,41,51,61,71 };
	for (int temp : vec)
	{
		std::cout << temp << "\t";
	}
	std::cout << "\n";

	std::array<int, 7> arr = { 12,22,32,42,52,62,72 };
	for (int temp : arr)
	{
		std::cout << temp << "\t";
	}
	std::cout << "\n";
}