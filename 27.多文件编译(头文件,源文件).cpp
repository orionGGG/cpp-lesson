#include <iostream>
#include <string>
#include <vector>
#include "math_utils.h"//��˫���ŵ�ԭ���������ڵ�ǰĿ¼��������ͷ�ļ�����λ��

/*1) header file ͷ�ļ� ".h"
	 declarations
  2) implementation file ʵʩ�ļ� ".cpp"
     definitions
  3) main file (where your main function exists) .cpp Դ�ļ�
	 calling
	 ͷ�ļ�����.h�ļ���һ�����������������ƽʱ���õ�#include<string.h>���ǰ��������ļ�
	 Դ�ļ�����.cpp�ļ���һ������������ͷ�ļ������������Ա�����ľ���ʵ�֣�
	 һ��һ��.h�ļ��ܻ���һ��ͬ����.cpp
	 ������Դ�ļ�����.rc�ļ����������һЩƩ��˵�������ͼ�����Դ������
	
*/

int main()
{
	std::cout << pow1(3, 3) << std::endl;
	std::cout << pow1(3) << std::endl;
	std::cout << pow1(3,5) << std::endl;
	return 0;
}