#include<iostream>
#include<string>


/*
encapsulation��װ
inheritance�̳�
polymorphism��̬��
three big pieces of object-oriented programming ���������������
*/

/*
the whole idea behind encapsulation is that  whatever is behind the scenes
you don't need to expose all the inner details of a class to the public
meaning you can have stuff that's private that still affects how the class functions
but outside of the class structure you don't have to see that stuff

���ڷ�װ����ͨ��Ȩ�����������еĴ�������޷��������޷�����,ֻ��ͨ���ӿ���ֱ��ʹ��
�����һ����������,������ֻ��֪������ȥʲô����(����)
Ȼ��������������������ʲô(�ӿ�),�����������̷�װ��,�㲻֪������ô������
��װ��Ŀ�����ڷ������,��֤�಻�ᱻ�������

two big things with encapsulation
1)abstraction ����
	you don't have to know all the inner workings to use a class
2)control
	we can control what people who are using our class can see what they can do with our class

we have two ways to achieve encapsulation
1) with access modifiers which we talked about that's how we can label certain things
	public protected private ���η��Ƿ�װ��һ�ַ�ʽ,�ɲ��뱩¶��ʹ���ߵľͲ���public
2)through getters and setters
	they're used for encapsulation there's no thing special about them
	they are just normal functions that attached to class
	they are just methods
	�����ڲ�����ķ������Է���private��Ա,���㲻����ͨ������ֱ�ӷ���private members
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

	void set_status(std::string status)//����������˷�װ������
	//���Ա�֤���ʹ���߿����������������������ʹ����
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