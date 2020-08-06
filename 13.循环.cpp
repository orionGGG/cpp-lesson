#include<iostream>

using namespace std;

int main()
{
	/*
	ICU
	I initialize  初始化
	C condition  条件
	U update
	*/
	int i = 0;//initialize 无限循环时while好用,其他一般用for
	while (i < 10)//condition 同if 一样括号里面是真则执行花括号内
	{
		cout << i;
		i++;//update i++放在最后就与for等效了
	}
	cout << "\n";

	for (int j = 0; j < 10; j++)//ICU initialize condition update
	{
		cout << j << endl;
	}

	int fact = 10;
	int factorial = fact;
	for (int i = factorial - 1; i > 1; i--)
	{
		factorial = factorial * i;
	}
	cout << "factorial of " << fact << ": " << factorial << endl;

	//happen at least once
	string answer = "hello";
	string guess;
	do
	{
		cout << "guess password" << endl;
		cin >> guess;
	} while (guess != answer);//注意分号位置 注意()内为true则执行,循环执行的条件
	//一直循环直到()内为false









}