#include<iostream>
#include<fstream>
#include<vector>


int main()
{
	std::ofstream file;//������Ϊfile��ofstream����,����˵��ofstream����ʵ����
	file.open("hello.txt", std::ios::app);//�ڵ�ǰ�ļ����´�hello.txt���ļ�,���û������һ��
	//std::ofstream file("hello");�����������Ч
	//std::ios::appʹ��ÿ��д�벻�Ǹ���,�������
	
	if (file.is_open())//file.is_open()��������ɹ����ļ��򷵻�true
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

	file.close();//��дҲ���Զ�ִ��
}