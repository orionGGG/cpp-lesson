#include<iostream>
#include<limits>


//How to use array in the function
void print_array(int arr[], int size)
{
	std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl;
	/*这里的sizeof(arr)返回的是一个int指针的大小，而不是int数组
	  在这种情况下将数组传递给函数，它会衰减为指向数组中第一个元素的指针，也就是arr[0]
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
	int guess[SIZE] = { 1,2,3,4,5 };//只有在访问单个元素或者定义数组时需要[]
	/*仅初始化数组的一部分时,所有其他元素为0
	  如果完全不初始化,元素的值就是不确定的
	*/
	int num_elements;
	int size;
	size = sizeof(guess);//输出的是bytes  8bit
	size = sizeof(guess) / sizeof(int);//输出大小
	std::cout << size << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (std::cin >> guess[i])//return cin ->true of input worked
			//cin函数输入正确类型的值则返回true
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
	std::cin.ignore(10000,'\n');//消除上一次的输入直到计数达到10000或者遇到\n
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	/*
	它的一个常用功能就是用来清除以回车结束的输入缓冲区的内容，消除上一次输入对下一次输入的影响。
	例如可以这么用，cin.ignore(1024, '\n')，通常把第一个参数设置得足够大，
	这样实际上是为了只有第二个参数 '\n' 起作用，
	所以这一句就是把回车（包括回车）之前的所以字符从输入缓冲流中清除出去。
	*/

	std::string test;
	std::cin >> test;
	std::cout << test << std::endl;

	/*
	size  数组的大小
	index  数组内元素的索引
	each element has an index tells you where in the array that element is.  array is zero-based
	第一个元素的索引是0，以此类推
	最后一个元素的索引是size-1
	statically sized
	make sure that your array is large enough to store whatever you going to put into it
	*/




	return 0;
}