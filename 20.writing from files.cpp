#include<iostream>
#include<fstream>
#include<vector>


int main()
{
	std::ofstream file;//创建名为file的ofstream对象,换种说法ofstream对象实例化
	file.open("hello.txt", std::ios::app);//在当前文件夹下打开hello.txt的文件,如果没有则创造一个
	//std::ofstream file("hello");与上面两句等效
	//std::ios::app使得每次写入不是覆盖,而是添加
	
	if (file.is_open())//file.is_open()函数如果成功打开文件则返回true
	{
		std::cout << "success\n";
	}
	std::vector<std::string> names;
	names.push_back("zhangsan");
	names.push_back("lisi");
	names.push_back("wang");
	names.push_back("liu");

	for (std::string name : names)
	{
		file << name << std::endl;
	}

	file.close();//不写也会自动执行
}