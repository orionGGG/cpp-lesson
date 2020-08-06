#include <iostream>
#include <string>
#include"teacher.h"

/*
Inheritance
你可以使一个类继承另一个类
   animal
 cat   dog
 猫和狗都是动物,他们有许多共同的特点,使用继承可以有效避免重复
 老师和学生都是用户,他们有区别又同时有用户的特性
 子类可以继承父类的所有内容,也可以重写父类的内容

 子类先调用父类的构造函数
 再调用自己的构造函数

 多重继承
 一个类可以同时继承多个类
*/

/*
Polymorphism
你可以把子类看做父类
比如说你可以把猫看做一个动物,猫既是猫又是动物
老师可以干用户能做的事,也可以干只有老师能做的事
*/

int main()
{
	Teacher teacher;
	User& u = teacher;//创建一个用户让他是老师,虽然他还是用户,但却完全具备了老师的特性
	teacher.name = "joe";
	std::cout << teacher.name << std::endl;
	teacher.output();
	u.output();
}