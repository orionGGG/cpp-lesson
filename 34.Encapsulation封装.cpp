#include<iostream>
#include<string>


/*
encapsulation封装
inheritance继承
polymorphism多态性
three big pieces of object-oriented programming 面向对象三大特征
*/

/*
the whole idea behind encapsulation is that  whatever is behind the scenes
you don't need to expose all the inner details of a class to the public
meaning you can have stuff that's private that still affects how the class functions
but outside of the class structure you don't have to see that stuff

至于封装就是通过权限来限制类中的代码外界无法看到更无法更改,只能通过接口来直接使用
类就像一个生产车间,外界的人只需知道丢进去什么材料(参数)
然后这个车间产生出来的是什么(接口),而把生产过程封装了,你不知道是怎么生产的
封装的目的在于方便管理,保证类不会被随意更改

two big things with encapsulation
1)abstraction 抽象
	you don't have to know all the inner workings to use a class
2)control
	we can control what people who are using our class can see what they can do with our class

we have two ways to achieve encapsulation
1) with access modifiers which we talked about that's how we can label certain things
	public protected private 修饰符是封装的一种方式,吧不想暴露给使用者的就不用public
2)through getters and setters
	they're used for encapsulation there's no thing special about them
	they are just normal functions that attached to class
	they are just methods
	在类内部定义的方法可以访问private成员,但你不可以通过对象直接访问private members
*/
class User
{
	std::string status = "Gold";
public:
	std::string name;
	User()
	{

	}
	User(std::string name)
	{
		this->name = name;
	}
	User(std::string name, std::string status)
	{
		this->name = name;
		this->status = status;
	}

	void set_status(std::string status)//这里就体现了封装的作用
	//可以保证类的使用者可以像类的设计者所想的那样使用类
	{
		if (status == "Gold" || status == "Silver" || status == "Bronze")
		{
			this->status = status;
		}
		else
		{
			std::cout << "that's useless\n";
		}
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
	User user2("ios", "apple");
	user1.set_status("1");
	std::cout << user1.name << std::endl;
	std::cout << user2.name << std::endl;
	std::cout << user2.get_status() << std::endl;
}