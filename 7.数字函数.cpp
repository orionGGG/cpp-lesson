#include<iostream>
#include<cmath>

int main()
{
	std::cout << sqrt(25) << std::endl;//ƽ��������
	std::cout << sqrt(-25) << std::endl;//nan
	std::cout << NAN << std::endl;//nan
	std::cout << pow(9, 999) << std::endl;//infinity
	std::cout << INFINITY << std::endl;//infinity
	std::cout << -INFINITY << std::endl;//-infinity


	std::cout << remainder(-9, 5) << std::endl;//ȡ��
	std::cout << fmod(-9, 5) << std::endl;//ȡģ
	std::cout << -9 % 5 << std::endl;//ȡģ��������������������ѭ��ѧ�еĴ���0�Ķ���
	/*
	ȡ�࣬��ѭ�������������ľ���ֵС��ԭ�򣬽�������������ͬ
	ȡģ����ѭ����������С��ԭ��
	*/

	std::cout << fmax(10.1, 3.25) << std::endl;//�Ƚϴ�С
	std::cout << ceil(fmax(10.1, 3.25)) << std::endl;//�Ƚϴ�С���������ȡ��
	std::cout << floor(fmax(10.1, 3.25)) << std::endl;//�Ƚϴ�С���������ȡ��
	std::cout << trunc(fmax(10.1, 3.25)) << std::endl;//�Ƚϴ�С���������ȡ��
	std::cout << fmin(10.1, 3.25) << std::endl;//�Ƚϴ�С
	std::cout << trunc(-1.5) << "\t" << floor(-1.5) << std::endl;//trunc��floor����
	//floorȡ��С�ģ�truncֱ��ĨȥС��
	std::cout << round(-1.5) << "\t" << round(-1.49) << std::endl;//round��������




}