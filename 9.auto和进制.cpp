#include<iostream>

using namespace std;

int main()
{
	/*auto�ؼ��ֿ����Զ��ж�����,����var
	��auto�������ʱ���������г�ʼ�����ڱ���׶α�������Ҫ���ݳ�ʼ�����ʽ���Ƶ�auto��ʵ�����͡�
	���auto������һ�֡����͡�������������һ����������ʱ�ġ�ռλ������
	�������ڱ����ڻὫauto�滻Ϊ����ʵ�ʵ�����
	*/
	auto a = 6UL;
	cout << a << endl;
	auto a1 = "ads";

	int n1 = 30;//ʮ����30
	int n2 = 0x30;//ʮ������
	int n3 = 030;//�˽���
	cout << std::hex << n1 << endl;//��ʮ���������30
	cout << std::oct << n1 << endl;//�԰˽������30




}