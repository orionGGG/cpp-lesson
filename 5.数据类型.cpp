#include<iostream>
#include<climits>
#include<float.h>
#define X 10;//�궨��

using std::cout;
using std::endl;

int main()
{
	//��������
	char xx;//char����8λ����������������ֽ���ǳ�����
	short a;
	int b;
	long c;
	long long d;
	//short <= int <= long <= long long

	unsigned short a1;
	unsigned int b1;
	unsigned long c1;
	unsigned long long d1;

	//sizeof()�����ֽ���������short����2�ֽ�Ҳ����16λ
	cout << sizeof(short) << endl;
	cout << SHRT_MAX << endl;


	//�ַ�����
	char x1 = 'A';//charʹ�õ�����''��������˫����""����string
	char x2 = 66;//�����Ӿͱ�ʾx2ΪASCII��66�Ŷ�Ӧ���ַ�
	cout << x1 << endl;
	//char��int�������������ʹ���ķ�ʽ��һ���ģ���ͬ�����ڽ��͵ķ�ʽ������ASCII����ת��
	cout << (int)x1 << endl;
	cout << x2 << endl;


	//��������
	bool pizza_is_good = true;
	//bool�ͱ�������������־������־�Ƿ�����ĳ�£�just like if�����
	pizza_is_good = 0;//����0����false������������true
	bool found = false;
	cout << found << endl;//���0
	cout << std::boolalpha << found << endl;//���false��ͨ�����std::boolalpha���Ŀ��


	//����������
	float q1 = 10.0 / 3;//�������ľ��ȶ������޵�,float�ľ��Ȳ���double
	cout << q1 << endl;
	q1 = q1 * 100000000000000;
	cout << std::fixed << q1 << endl;
	cout << FLT_DIG << endl;//����float��֤��ȷ����Чλ����Ҳ����6λ����7λ������ȷ

	double q2 = 7.7e4;
	cout << DBL_DIG << endl;//����double��֤��ȷ����Чλ����15λ��ͬ��16λ

	long double q3;
	cout << LDBL_DIG << endl;//����double��֤��ȷ����Чλ����15λ��ͬ��


	//����������const,�궨��,ö��
	const int W1 = 5;//������W1��ֵΪ5��int����
	enum { w2 = 100 };//ö��
	enum DAY
	{
		MON = 1, TUE, WED, THU, FRI, SAT, SUN
	};
	enum DAY day;
	day = WED;


	/*
	��ͬ�������ݽ������㣬���� double ���� int
	1) �����������������Ͳ���ͬ������ת����ͬһ���ͣ�Ȼ��������㡣
	2)  ת�������ݳ������ӵķ�����У��Ա�֤���Ȳ����͡���int�ͺ�long������ʱ���Ȱ�int��ת��long�ͺ��ٽ������㡣
		a.���������͵��ֽ�����ͬ��ת�����ֽ����ߵ�����
		b.���������͵��ֽ�����ͬ����һ���з��ţ�һ���޷��ţ���ת�����޷�������
	3) ���еĸ������㶼����˫���Ƚ��еģ���ʹ����float������������ı��ʽ��ҲҪ��ת����double�ͣ��������㡣
	4) char�ͺ�short�Ͳ�������ʱ��������ת����int�͡�
	5) �ڸ�ֵ�����У���ֵ�����������������Ͳ�ͬʱ����ֵ���ұ��������ͽ�ת��Ϊ����������͡�����ұ������������ͳ�����߳�ʱ������ʧһ�������ݣ������ή�;��ȣ���ʧ�Ĳ��ְ�����������ǰ���롣
	���磺
	int ��double���ڲ�ͬ���ͣ�ת����ѭ�;��ȵ��߾���ת��������int��ת��double�;��㣬�������double�͡�
	*/
	return 0;
}