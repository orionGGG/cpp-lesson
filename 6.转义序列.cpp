#include<iostream>

using namespace std;

int main()
{
	cout << "Hello\tThere" << endl;//\t-->tab
	cout << "Hello\bThere" << endl;//\b-->�˸�
	cout << "Hello\aThere" << endl;//\a-->����
	cout << "Hello\vThere" << endl;//\v-->��ֱ
	cout << "Helloya\rThere" << endl;//\r-->���ص����п�ͷ
	cout << "Hello\fThere" << endl;//\f-->��ҳ
	cout << "Hello\nThere" << endl;//\n-->����
	cout << "Hello\"There\"" << endl;
	cout << "\0" << endl;//\0-->����ֹ����������Ϊ�ַ���ĩβʹ��

}