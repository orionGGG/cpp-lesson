#include<iostream>
#include<array>

void print_array(std::array<int, 5> &arr)
//ͬ����һ������ͨ��&��ʹ�ú������Ըı�main�����еĲ���
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
	���鴫�ݸ�����ʱ��������������Ĵ�С,��������
	������Ϊָ�봫�ݸ�����,������ֵ����
	*/
	return 0;
}