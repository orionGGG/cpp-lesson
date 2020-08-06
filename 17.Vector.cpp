#include<iostream>
#include<vector>


//How to pass vector to function
void print_vector(std::vector<int> vec)
/*print函数中的vector与main函数中的并不是一个,print函数将main函数的复制过来了而已,其他类型也是同理
这意味着我们对函数内部向量做任何更改都不会影响main函数内部
 (std::vector<int> & vec)这样操作后(或者+)main函数与外部函数共享同一个向量,也就是reference
对于数组而言,函数调用时自动衰减为指针,所以可以直接修改
*/
{
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << "\t";
	}
	std::cout << "\n";
}


int main()
{

	//vector
	std::vector<int> items = { 12,13 };
	items.push_back(100);//在向量末尾增加元素100
	std::cout << items.size() << std::endl;//获得向量的大小
	std::cout << items[1] << std::endl;//跟array一样都是通过方括号来得到单个元素
	std::cout << items[items.size() - 1] << std::endl;//最后一个元素
	items.pop_back();//删除向量中的最后一个元素
	std::cout << items.size() << std::endl;

	/*
	Arraylist
	dynamic sized
	vector是动态的,当你使用push_back()方法增加元素的时候如果超出了向量的分配内存
	向量就会重新分配内存,使得其能包含更多的元素,这一切都在幕后发生,感觉不到
	所以它将复制旧数据并将其放入新分配的内存中
	*/



	std::vector <int> data = { 1,2,3,4,5,6,7 };
	print_vector(data);

	int a;
	std::vector <int> jax;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> a;
		jax.push_back(a);
	}
	print_vector(jax);




	return 0;
}