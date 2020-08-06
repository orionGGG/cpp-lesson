#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<vector>
#include<fstream>

void save_score(int count)
{

	std::ifstream input("best_score.txt");
	if (!input.is_open())
	{
		std::cout << "Unable to read this file\n";
		return;//return�������������ǽ�������,֮��Ĵ��붼����ִ����
	}
	int best_score;
	input >> best_score;
	std::ofstream output("best_score.txt");
	if (!output.is_open())
	{
		std::cout << "Unable to read this file\n";
		return;
	}
	if (count < best_score)
	{
		output << count;
	}
	else
	{
		output << best_score;
	}

}

void print_vector(std::vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << std::endl;
	}
}

void play_game()
{
	int count = 0;
	std::vector<int> guesses;
	int guess_count = 0;
	int random1 = rand();//rand()����һ����Χ�� 0 �� RAND_MAX ֮�������ֵ
	int random = rand() % 50;//rand()��50ȡģ�ͷ���[0,49]��ֵ
	std::cout << "Let's party" << std::endl;
	std::cout << random << std::endl;
	while (true)
	{
		count++;
		int guess;
		std::cin >> guess;
		guesses.push_back(guess);
		if (guess == random)
		{
			std::cout << "You win" << std::endl;
			break;
		}
		else if (guess < random)
		{
			std::cout << "Too low" << std::endl;
		}
		else
		{
			std::cout << "Too high" << std::endl;
		}
		std::cout << "Try again" << std::endl;
	}
	save_score(count);
	print_vector(guesses);
}

int main()
{
	srand(time(NULL));
	/*
	 rand()��srand()Ҫһ��ʹ�ã�����srand()������ʼ�����������,rand()���������������
	  ��ΪĬ����������������Ϊ1������ͬ����������Ӳ������������һ����,
	  ʧȥ������Ե����壬����Ϊʹÿ�εõ����������һ�����ú���srand()��ʼ����������ӡ�
	  srand()�Ĳ�������time����ֵ������ǰʱ�䣩����Ϊ���ε���rand()������ʱ��ͨ���ǲ�ͬ�ģ�
	  �����Ϳ��Ա�֤������ˡ�
	  time(0)��ʾ���ص�ǰʱ�䣬����������󷵻�1��time(NULL)���ص�ǰʱ�䣬�������󷵻�null��������
	  */

	int choice;
	std::cout << "0.Quit" << std::endl << "1.Play" << std::endl;
	std::cin >> choice;
	do
	{
		if (choice == 0)
		{
			std::cout << "BYE" << std::endl;
			return 0;
		}
		if (choice == 1)
		{
			play_game();
			break;
		}
	} while (choice != 0);
	

	return 0;
}