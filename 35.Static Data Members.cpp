#include <iostream>
#include<vector>

/*
when you creat a member that is static. it's no longer going to be associated with each object
it's going to be associated with the class
通常描述整体而不是个体的数据会设置为静态变量
比如总的人口数  每个用户都不需要该信息而是描述整个用户群
*/


class User
{
	static int user_count;//不用创建对象就能访问,其本身就是类的属性
	std::string status = "Gold";
public:
	static int get_user_count()//静态函数指能返回静态变量
	{
		return user_count;
	}
	std::string name;
	User()
	{
		user_count++;
	}
	User(std::string name)
	{
		this->name = name;
		user_count++;
	}
	User(std::string name, std::string status)
	{
		this->name = name;
		this->status = status;
		user_count++;
	}

	void set_status(std::string status)
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

int User::user_count = 0;


int main()
{
	User user;
	std::cout << User::get_user_count() << std::endl;

}