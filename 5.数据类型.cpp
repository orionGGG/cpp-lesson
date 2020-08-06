#include<iostream>
#include<climits>
#include<float.h>
#define X 10;//宏定义

using std::cout;
using std::endl;

int main()
{
	//整数类型
	char xx;//char仅有8位，如果用来储存数字将会非常有限
	short a;
	int b;
	long c;
	long long d;
	//short <= int <= long <= long long

	unsigned short a1;
	unsigned int b1;
	unsigned long c1;
	unsigned long long d1;

	//sizeof()包含字节数，例如short就是2字节也就是16位
	cout << sizeof(short) << endl;
	cout << SHRT_MAX << endl;


	//字符类型
	char x1 = 'A';//char使用单引号''括起来，双引号""留给string
	char x2 = 66;//这样子就表示x2为ASCII码66号对应的字符
	cout << x1 << endl;
	//char与int等其他数据类型储存的方式是一样的，不同点在于解释的方式，根据ASCII码来转换
	cout << (int)x1 << endl;
	cout << x2 << endl;


	//布尔类型
	bool pizza_is_good = true;
	//bool型变量经常用作标志符，标志是否发生了某事，just like if语句中
	pizza_is_good = 0;//仅有0代表false，其他均代表true
	bool found = false;
	cout << found << endl;//输出0
	cout << std::boolalpha << found << endl;//输出false，通过添加std::boolalpha达成目的


	//浮点数类型
	float q1 = 10.0 / 3;//浮点数的精度都是有限的,float的精度不如double
	cout << q1 << endl;
	q1 = q1 * 100000000000000;
	cout << std::fixed << q1 << endl;
	cout << FLT_DIG << endl;//代表float保证正确的有效位数，也就是6位，第7位基本正确

	double q2 = 7.7e4;
	cout << DBL_DIG << endl;//代表double保证正确的有效位数有15位，同理16位

	long double q3;
	cout << LDBL_DIG << endl;//代表double保证正确的有效位数有15位，同上


	//常量，三种const,宏定义,枚举
	const int W1 = 5;//限制了W1的值为5，int类型
	enum { w2 = 100 };//枚举
	enum DAY
	{
		MON = 1, TUE, WED, THU, FRI, SAT, SUN
	};
	enum DAY day;
	day = WED;


	/*
	不同类型数据进行运算，例如 double 除以 int
	1) 若参与运算量的类型不相同，则先转换成同一类型，然后进行运算。
	2)  转换按数据长度增加的方向进行，以保证精度不降低。如int型和long型运算时，先把int量转成long型后再进行运算。
		a.若两种类型的字节数不同，转换成字节数高的类型
		b.若两种类型的字节数相同，且一种有符号，一种无符号，则转换成无符号类型
	3) 所有的浮点运算都是以双精度进行的，即使仅含float单精度量运算的表达式，也要先转换成double型，再作运算。
	4) char型和short型参与运算时，必须先转换成int型。
	5) 在赋值运算中，赋值号两边量的数据类型不同时，赋值号右边量的类型将转换为左边量的类型。如果右边量的数据类型长度左边长时，将丢失一部分数据，这样会降低精度，丢失的部分按四舍五入向前舍入。
	例如：
	int 和double属于不同类型，转换遵循低精度到高精度转换，所以int先转成double型就算，结果就是double型。
	*/
	return 0;
}