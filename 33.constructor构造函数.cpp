#include<iostream>
#include<vector>

/*
constructor is just a method but there's two special things about it
1)it has the exact same name as the class
2)it has no return or return type(that's how you distinguish the constructor from the other method)
the defualt constructor is the one with no arguements
ʲô���캯������дĬ�Ͼ����޲ι��캯��
�����д��һ�����ι��캯��,���޲ι��캯��Ҳ���Լ�д
you can make custom constructors that take parameters
instead of just doing the default constructor we can call a different constructor
and it allows us to basically instantiate our class in different ways
*/

class User
{
	std::string status = "Go";//��������Ķ����ڲ�����Ĭ��ֵ
public:
	std::string name;
	User()
	{

	}
	User(std::string name)//���캯����������ʹ���ض�ֵ��ʼ������
	{
		this->name = name;
	}
	User(std::string name,std::string status)//private���͵�ʵ������Ҳ��ͨ�����캯�����¶���
	{
		this->name = name;
		this->status = status;
	}
	~User()//��������
	//��дҲ����,����Ĭ��ִ��,�ô���ɾ������,����������Զ�����,��Ҫ������������ִ�����������Ҫ���±�д
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