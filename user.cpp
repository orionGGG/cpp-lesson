#include <iostream>
#include <string>
#include "user.h"

//��cpp��ֻ��Ҫ���巽���Ϳ�����
	std::string User::get_status()
	{
		return status;
	}
	void User::set_status(std::string status)
	{
		this->status = status;
	}
	User::User()
	{
		std::cout << "User created\n";
	}
	void User::output()
	{
		std::cout << "I am a user\n";
	}