#ifndef MATH_UTILS//ifndef if not define ����δ����ʱΪ��
#define MATH_UTILS

//����Ҫע��Ϊ�˲���α���ͷ�ļ�,��Ҫʹ��ͷ�ļ�������
struct Rectangle
{
	double length;
	double width;
};

double area(double length);

double area(double length, double width);

double area(Rectangle rectangle);

double area(std::string str);

void swap(double& a, double& b);

void swap(std::string& a, std::string& b);

double pow1(double base, int pow = 2);//��ʾ���û����ڶ�������,��Ĭ��Ϊ2

#endif