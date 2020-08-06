#include <iostream>
#include <string>
#include <vector>
#include "math_utils.h"//用双引号的原因是它将在当前目录中搜索该头文件所在位置

/*1) header file 头文件 ".h"
	 declarations
  2) implementation file 实施文件 ".cpp"
     definitions
  3) main file (where your main function exists) .cpp 源文件
	 calling
	 头文件就是.h文件，一般用来放类的声明，平时你用的#include<string.h>就是包含这种文件
	 源文件就是.cpp文件，一般用来放你在头文件里声明的类成员函数的具体实现，
	 一般一个.h文件总会有一个同名的.cpp
	 至于资源文件就是.rc文件，用来存放一些譬如菜单，或者图标等资源的内容
	
*/

int main()
{
	std::cout << pow1(3, 3) << std::endl;
	std::cout << pow1(3) << std::endl;
	std::cout << pow1(3,5) << std::endl;
	return 0;
}