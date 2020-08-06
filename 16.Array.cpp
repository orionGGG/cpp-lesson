#include<iostream>
#include<limits>


//How to use array in the function
void print_array(int arr[], int size)
{
	std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl;
	/*�����sizeof(arr)���ص���һ��intָ��Ĵ�С��������int����
	  ����������½����鴫�ݸ�����������˥��Ϊָ�������е�һ��Ԫ�ص�ָ�룬Ҳ����arr[0]
	*/
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
}


int main()
{
	//array 
	const int SIZE = 10;
	int guess[SIZE] = { 1,2,3,4,5 };//ֻ���ڷ��ʵ���Ԫ�ػ��߶�������ʱ��Ҫ[]
	/*����ʼ�������һ����ʱ,��������Ԫ��Ϊ0
	  �����ȫ����ʼ��,Ԫ�ص�ֵ���ǲ�ȷ����
	*/
	int num_elements;
	int size;
	size = sizeof(guess);//�������bytes  8bit
	size = sizeof(guess) / sizeof(int);//�����С
	std::cout << size << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (std::cin >> guess[i])//return cin ->true of input worked
			//cin����������ȷ���͵�ֵ�򷵻�true
		{
			//input worked
		}
		else
		{
			//invalid worked
			break;
		}
	}
	print_array(guess, size);
	std::cin.clear();
	std::cin.ignore(10000,'\n');//������һ�ε�����ֱ�������ﵽ10000��������\n
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	/*
	����һ�����ù��ܾ�����������Իس����������뻺���������ݣ�������һ���������һ�������Ӱ�졣
	���������ô�ã�cin.ignore(1024, '\n')��ͨ���ѵ�һ���������õ��㹻��
	����ʵ������Ϊ��ֻ�еڶ������� '\n' �����ã�
	������һ����ǰѻس��������س���֮ǰ�������ַ������뻺�����������ȥ��
	*/

	std::string test;
	std::cin >> test;
	std::cout << test << std::endl;

	/*
	size  ����Ĵ�С
	index  ������Ԫ�ص�����
	each element has an index tells you where in the array that element is.  array is zero-based
	��һ��Ԫ�ص�������0���Դ�����
	���һ��Ԫ�ص�������size-1
	statically sized
	make sure that your array is large enough to store whatever you going to put into it
	*/




	return 0;
}