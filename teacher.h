#ifndef TEACHER_H
#define TEACHER_H
#include "user.h"
#include<vector>
#include<string>
#include<iostream>
class Teacher :public User//public��ʾ���ı丸�������Ե�����private֮���
{
public:
	std::vector<std::string> classes_teaching;
	void output();
	Teacher();
};
#endif
