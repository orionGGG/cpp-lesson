#ifndef USER_H
#define USER_H
//完成了类中的一切的声明
#include<string>
class User
{
	std::string status = "cold";
public:
	std::string name;
	std::string email;
	std::string sex;
	std::string get_status();
	void set_status(std::string status);
	User();
	virtual void output();//virtual代表可以在子类中重写
};
#endif