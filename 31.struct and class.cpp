#include <iostream>

/*
struct and class in c++ do the same thing
they're both going to creat an object
people choose structs for generally smaller structures and classes for larger structures
*/


/*
when you creat a class or struct the things inside of it are known as its members
modifiers: public private protected
if it is private we can't access it from the object

struct's members are by default public with classes they are by default private
by convention structs are only used to contain data members meaning variables
in general you will try to avoid ant kind of functionality inside of a struct just use it to store data
*/

/*
class basically defines the structure or the shape of some data. so think of it like a cookie cutter
the process of going from a class to objects is known as instantiation

*/

struct User
{
	std::string name;
	private:
		std::string status = "Gold";
};

class Person
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

int main()
{
	User me;
	me.name = "GJL";
	std::cout << "name: " << me.name << std::endl;

	Person joe;
	joe.name = "joe";
	joe.email = "343348459@qq.com";
	joe.sex = "male";
	std::cout << "status: " << joe.get_status() << std::endl;

}