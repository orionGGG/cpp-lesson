#include <iostream>
#include <vector>

/*
namespace such as :standard  std
std::string
�����ռ�������������ֿ⺯���������ĸ���
1) common functionality
2) a particular project
3) classifying/categories
*/

namespace utils
{
	void print_vector(std::vector<int> vec)
	{
		for (int i = 0; i < vec.size(); i++)
		{
			std::cout << vec[i] << "\t";
		}
	}
}

int main()
{
	std::vector<int> sss = { 1,2 };
	utils::print_vector(sss);
	return 0;
}