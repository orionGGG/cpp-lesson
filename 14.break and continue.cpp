#include<iostream>

using namespace std;

int main()
{
	std::string str = "Hello everyone";
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i] << endl;
		if (str[i] == 'o')
		{
			cout << "found o\n";
			break;//break is used to break out of the closest loop that you're in
			//break���������������ѭ����
		}
	}
	cout << "Done\n";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'o')
		{
			continue;//stop the current iteration and go to the next iteration
			//Ҳ����������continue��ǰ�����������,���ܺ������,ֱ�ӽ�����һ�ε���,�����������ո�
		}
		cout << str[i] << endl;
	}
	return 0;
}