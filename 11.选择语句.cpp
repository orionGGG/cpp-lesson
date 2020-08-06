#include<iostream>

using namespace std;

int main()
{
	/*
	所谓选择语句就是指根据结果来进行不同操作的语句
	if	switch
	*/


	//if
	cout << "How old r u?\n";
	int age;
	cin >> age;
	if (age < 13)
	{
		cout << "you are little than 13" << endl;
		return -1;//以意外方式终止程序
	}
	else if (age < 19)
	{
		cout << "you are in 13 to 19" << endl;
	}
	else {
		cout << "you are old than 19" << endl;
	}



	//switch
	int day;
	cout << "What day is it today?" << endl;
	cin >> day;
	switch (day)//switch并不是很有用,关键在于他()内必须是整数类型,而if则不存在这些限制
	{
	case 1:cout << "Monday" << endl; break;
	case 2:cout << "Tuesday" << endl; break;
	case 3:cout << "Wednesday" << endl; break;
	case 4:cout << "Thursday" << endl; break;
	case 5:cout << "Friday" << endl; break;
	case 6:cout << "Saturdat" << endl; break;
	case 7:cout << "Sunday" << endl; break;
	default: cout << "you know the week just has 7 days" << endl;//default除了列出了的其他所有情况
	}
}