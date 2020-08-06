/*
function
独立
freestanding by itself
own entity
*/

/*
method	specific特定
方法和函数的唯一区别:方法是附加到对象上的
通过对象访问
*/

/*
static method	general一般
attached to class
附加到类上
对象是类的实例,类是对象的抽象
静态方法不依赖于特定实体或类的实例,它只与类本身相关
*/

/*
constructor
特殊的函数
在类的实例化的过程中调用,创造一个新对象
创造类的时候创造
没有返回类型
使用构造函数唯一的目的是在从类中创建对象时做一些事情
*/

#include<iostream>
#include<string>

int main()
{
	std::string taco = "yum";
	taco.length();//method

}