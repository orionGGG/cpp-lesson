#include <iostream>
#include <vector>


class User
{
	std::string status = "cold";
public:
	std::string name;
	std::string email;
	std::string sex;
	std::string get_status()
	{
		return status;
	}
};

int add_user_if_not_exist(std::vector<User>& users, User user)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].name == user.name/*match*/)
		{
			return i;
		}
	}
	users.push_back(user);
	return users.size() - 1;
}


int main()
{
	User user;
	user.name = "joe";
	user.email = "343348459@qq.com";
	user.sex = "male";
	std::cout << "status: " << user.get_status() << std::endl;

	std::vector<User> users;
	users.push_back(user);
	std::cout << "name: " << users[0].name << std::endl;
	users.push_back(User());//User()是构造函数
	users[1].name = "gaga";
	std::cout << "name: " << users[1].name << std::endl;

	User user1, user2, user3;
	user1.name = "xiaoming";
	user2.name = "xiaowang";
	user3.name = "xiaohong";
	std::vector<User> stus;
	stus.push_back(user1);
	stus.push_back(user2);
	stus.push_back(user3);
	User user4;
	user4.name = "xiaogang";
	std::cout << add_user_if_not_exist(stus, user4) << std::endl;
	std::cout << stus[3].name << std::endl;
	std::cout << stus.size() << std::endl;
}