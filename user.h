#ifndef USER_H
#define USER_H
//��������е�һ�е�����
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
	virtual void output();//virtual�����������������д
};
#endif