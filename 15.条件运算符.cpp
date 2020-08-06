#include<iostream>

using namespace std;

int main()
{
	int answer = 11;
	int point;
	int guess;
	cout << "Guess the number" << endl;

	cin >> guess;
	/*
	if (guess == answer)
	{
		point = 10;
	}
	else{
		point = 0;
	}
	cout << point << endl;
	*/
	point = answer == guess ? 10 : 0;//与注释内代码等效
	answer == guess ? cout << "Good job" << endl : cout << "Bad job" << endl;
	return 0;
}