#include<iostream>

using namespace std;

int main()
{
	/*
	ICU
	I initialize  ��ʼ��
	C condition  ����
	U update
	*/
	int i = 0;//initialize ����ѭ��ʱwhile����,����һ����for
	while (i < 10)//condition ͬif һ����������������ִ�л�������
	{
		cout << i;
		i++;//update i++����������for��Ч��
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
	} while (guess != answer);//ע��ֺ�λ�� ע��()��Ϊtrue��ִ��,ѭ��ִ�е�����
	//һֱѭ��ֱ��()��Ϊfalse









}