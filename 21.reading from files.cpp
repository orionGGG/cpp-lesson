#include<iostream>
#include<fstream>
#include<vector>
#include<string>

int main()
{
	std::ifstream file("hello.txt");//读取文件,如果文件不存在不会创建
	std::vector <std::string> store;
	std::string input;
	while (file >> input) //能成功读取则返回true 这样子就能遍历整个文件直到什么都不剩下
	//读到完整的string类型或者遇到无效string将已读取的储存在input中
	{
		store.push_back(input);
	}
	for (std::string str : store)
	{
		std::cout << str << std::endl;
	}
	std::cout << "next" << std::endl;

	std::ifstream file_1("hello1.txt");
	std::vector <char> store_1;
	char input_1;
	while (file_1 >> input_1)
	//读到完整的char类型或者遇到无效char将已读取的储存在input_1中
	{
		store_1.push_back(input_1);
	}
	for (char str : store_1)
	{
		std::cout << str << std::endl;
	}
	std::cout << "next" << std::endl;

	std::ifstream file_2("hello1.txt");
	char temp = file_2.get();
	std::cout << temp << "\n";//获得了第一个字符
	std::string str1;
	getline(file_2, str1);//获得一行
	std::cout << str1 << std::endl;

}