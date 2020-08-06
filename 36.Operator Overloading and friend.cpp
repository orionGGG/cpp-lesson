#include <iostream>
#include<vector>
#include<string>

/*
可以通过重载运算符,来定义不同的自定义类型中符号的含义(比如对于User 类 + 的含义)
你可以在类的内部定义它
操作符有点像一个函数
当你使用运算符,你可以将他们视为编写函数的另一种方式
*/

/*
操作符的左边是调用它的对象
右边是它的参数
如果是在不同对象之间使用操作符
则左边与右边都是它的参数
并且在类外和main外的地方重定义
*/

class Position
{
	std::string name = "gjl";
public:
	int x = 10;
	int y = 20;
	Position operator + (Position pos)//重定义运算符
	//最前面的那个Position就是返回类型 然后是名称 后面是参数 就跟函数一模一样
	{
		Position new_pos;
		new_pos.x = this->x + pos.x;
		new_pos.y = this->y + pos.y;
		return new_pos;
	}
	bool operator ==(Position pos)
	{
		if (this->x == pos.x && this->y == pos.y)
		{
			return true;
		}
		return false;
	}
	friend void output_name(Position pos);//放在public后,定义在类外
	friend std::ostream& operator <<(std::ostream& output, Position pos);
	//作用:在类外创建一个可以访问private属性的函数
};


void output_name(Position pos)//可以调用类中的私有属性
{
	std::cout << pos.name;//通常这会产生错误,因为它是私有的,但这种情况却可以
}



//操作数为不同类的时候在类外重新定义操作符

std::ostream& operator <<(std::ostream& output, Position pos)
//const可以保证对象不被改变,防止代码写错
{
	output << "x: " << pos.x << "\t" << "y: " << pos.y;
	return output;
}

std::istream& operator >>(std::istream& input, Position& pos)
{
	input >> pos.x >> pos.y;
	return input;
}

int main()
{
	Position pos1, pos2;
	Position pos3 = pos1 + pos2;
	Position pos;
	std::cin >> pos;
	std::cout << pos3.x << "\t" << pos3.y << std::endl;
	std::cout << pos << std::endl;
	/*std::cout是ostream类的对象,如果想要能够使用多个<<则就需要返回改类型对象
	(std::cout << pos3.x) << "\t" << pos3.y << std::endl;
	执行完括号内的以后返回ostream对象,对于下一个<<符号就有了新的参数
	*/

	if (pos1 == pos2)
	{
		std::cout << "They are the same." << std::endl;
		std::cout << "It's too hard." << std::endl;
		std::cout << "O.O" << std::endl;
	}
	std::cout << pos3 << std::endl;
	output_name(pos);
}