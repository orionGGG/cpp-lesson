#include <iostream>
#include<vector>

/*
when you creat a member that is static. it's no longer going to be associated with each object
it's going to be associated with the class
ͨ��������������Ǹ�������ݻ�����Ϊ��̬����
�����ܵ��˿���  ÿ���û�������Ҫ����Ϣ�������������û�Ⱥ
*/


class User
{
	static int user_count;//���ô���������ܷ���,�䱾������������
	std::string status = "Gold";
public:
	static int get_user_count()//��̬����ָ�ܷ��ؾ�̬����
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