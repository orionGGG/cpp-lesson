#include <iostream>
#include <vector>

void do_something(const int data)
{

}

void print_array(int data[], int size)//const in data[]����ȷ���ں�����data����ı�
//���ں�����������ʱ,�����˥��Ϊָ��,���Ըı亯���ڵĻ�ı�main�е�����
//����Ĭ������¿��������������н����޸�,����(��������,����)Ĭ������²����޸�
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