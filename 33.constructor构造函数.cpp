#include<iostream>
#include<vector>

/*
constructor is just a method but there's two special things about it
1)it has the exact same name as the class
2)it has no return or return type(that's how you distinguish the constructor from the other method)
the defualt constructor is the one with no arguements
什么构造函数都不写默认就有无参构造函数
如果你写了一个含参构造函数,则无参构造函数也得自己写
you can make custom constructors that take parameters
instead of just doing the default constructor we can call a different constructor
and it allows us to basically instantiate our class in different ways
*/

class User
{
	std::string status = "Go";//可以在类的定义内部分配默认值
public:
	std::string name;
	User()
	{

	}
	User(std::string name)//构造函数允许我们使用特定值初始化对象
	{
		this->name = name;
	}
	User(std::string name,std::string status)//private类型的实例变量也可通过构造函数重新定义
	{
		this->name = name;
		this->status = status;
	}
	~User()//析构函数
	//不写也会有,并且默认执行,用处是删除对象,程序结束后自动调用,需要在析构函数中执行特殊操作才要重新编写
	{
		std::cout << "Destructor\n";
	}
	std::string get_status()
	{
		return this->status;
	}
};

int main()
{
	User user;
	User user1("joe");
	User user2("ios","apple");
	std::cout << user1.name << std::endl;
	std::cout << user2.name << std::endl;
	std::cout << user2.get_status() << std::endl;
}