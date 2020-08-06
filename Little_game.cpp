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
		return;//return的作用在这里是结束程序,之后的代码都不会执行了
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
	int random1 = rand();//rand()返回一个范围在 0 到 RAND_MAX 之间的整数值
	int random = rand() % 50;//rand()对50取模就返回[0,49]的值
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
	 rand()和srand()要一起使用，其中srand()用来初始化随机数种子,rand()用来产生随机数。
	  因为默认情况下随机数种子为1，而相同的随机数种子产生的随机数是一样的,
	  失去了随机性的意义，所以为使每次得到的随机数不一样，用函数srand()初始化随机数种子。
	  srand()的参数，用time函数值（即当前时间），因为两次调用rand()函数的时间通常是不同的，
	  这样就可以保证随机性了。
	  time(0)表示返回当前时间，如果发生错误返回1，time(NULL)返回当前时间，发生错误返回null即不返回
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