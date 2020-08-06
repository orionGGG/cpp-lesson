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
			//break跳出距离其最近的循环体
		}
	}
	cout << "Done\n";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'o')
		{
			continue;//stop the current iteration and go to the next iteration
			//也就是遇到了continue则当前迭代宣告结束,不管后面的了,直接进行下一次迭代,常用于消除空格
		}
		cout << str[i] << endl;
	}
	return 0;
}