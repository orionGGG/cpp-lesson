#include <iostream>
#include<vector>
#include<string>

/*
����ͨ�����������,�����岻ͬ���Զ��������з��ŵĺ���(�������User �� + �ĺ���)
�����������ڲ�������
�������е���һ������
����ʹ�������,����Խ�������Ϊ��д��������һ�ַ�ʽ
*/

/*
������������ǵ������Ķ���
�ұ������Ĳ���
������ڲ�ͬ����֮��ʹ�ò�����
��������ұ߶������Ĳ���
�����������main��ĵط��ض���
*/

class Position
{
	std::string name = "gjl";
public:
	int x = 10;
	int y = 20;
	Position operator + (Position pos)//�ض��������
	//��ǰ����Ǹ�Position���Ƿ������� Ȼ�������� �����ǲ��� �͸�����һģһ��
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
	friend void output_name(Position pos);//����public��,����������
	friend std::ostream& operator <<(std::ostream& output, Position pos);
	//����:�����ⴴ��һ�����Է���private���Եĺ���
};


void output_name(Position pos)//���Ե������е�˽������
{
	std::cout << pos.name;//ͨ������������,��Ϊ����˽�е�,���������ȴ����
}



//������Ϊ��ͬ���ʱ�����������¶��������

std::ostream& operator <<(std::ostream& output, Position pos)
//const���Ա�֤���󲻱��ı�,��ֹ����д��
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
	/*std::cout��ostream��Ķ���,�����Ҫ�ܹ�ʹ�ö��<<�����Ҫ���ظ����Ͷ���
	(std::cout << pos3.x) << "\t" << pos3.y << std::endl;
	ִ���������ڵ��Ժ󷵻�ostream����,������һ��<<���ž������µĲ���
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