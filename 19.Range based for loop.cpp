#include<iostream>
#include<vector>
#include<array>


int main()
{
	//������ǿ��forѭ�����Ը������׵ر��������е�����Ԫ��
	int data[] = { 1,2,3,4,5,6,7 };

	for (int temp : data)
	//Ҫ˵ÿ��Ԫ�ص�����,������һ���±�������ʱ������ЩԪ���е�ÿһ�� : ������õ���ЩԪ��
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