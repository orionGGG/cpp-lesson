#include <iostream>
#include <vector>
#include <string>

int main()
{
	int guesses[][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//���ڶ�ά���������ȷ�ڶ����ߴ�
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			std::cout << guesses[r][c] << "\t";
		}
		std::cout << "\n";
	}

	std::vector<std::vector<int>> grades =
	{
		{11,22,33},
		{44,55,66},
		{77,88,99}
	};
	//������vector��Ƕ��ʹ�ã�������vectorԪ�����ÿ��Ԫ��Ҳ��vector����
	for (int r = 0; r < grades.size(); r++)
	{
		for (int c = 0; c < grades[r].size(); c++)
		{
			std::cout << grades[r][c] << "\t";
		}
		std::cout << "\n";
	}


}