#ifndef TEACHER_H
#define TEACHER_H
#include "user.h"
#include<vector>
#include<string>
#include<iostream>
class Teacher :public User//public表示不改变父类中属性的修饰private之类的
{
public:
	std::vector<std::string> classes_teaching;
	void output();
	Teacher();
};
#endif
