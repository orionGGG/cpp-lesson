#include<iostream>
#include<fstream>
#include<vector>
#include<string>

int main()
{
	std::ifstream file("hello.txt");//��ȡ�ļ�,����ļ������ڲ��ᴴ��
	std::vector <std::string> store;
	std::string input;
	while (file >> input) //�ܳɹ���ȡ�򷵻�true �����Ӿ��ܱ��������ļ�ֱ��ʲô����ʣ��
	//����������string���ͻ���������Чstring���Ѷ�ȡ�Ĵ�����input��
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
	//����������char���ͻ���������Чchar���Ѷ�ȡ�Ĵ�����input_1��
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
	std::cout << temp << "\n";//����˵�һ���ַ�
	std::string str1;
	getline(file_2, str1);//���һ��
	std::cout << str1 << std::endl;

}