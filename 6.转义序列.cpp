#include<iostream>

using namespace std;

int main()
{
	cout << "Hello\tThere" << endl;//\t-->tab
	cout << "Hello\bThere" << endl;//\b-->退格
	cout << "Hello\aThere" << endl;//\a-->警报
	cout << "Hello\vThere" << endl;//\v-->垂直
	cout << "Helloya\rThere" << endl;//\r-->返回到本行开头
	cout << "Hello\fThere" << endl;//\f-->翻页
	cout << "Hello\nThere" << endl;//\n-->换行
	cout << "Hello\"There\"" << endl;
	cout << "\0" << endl;//\0-->空终止符，经常作为字符串末尾使用

}