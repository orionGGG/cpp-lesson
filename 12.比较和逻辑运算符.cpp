#include<iostream>
#include<string>

using namespace std;

int main()
{
	/*
	�߼������
	&& �� ,|| �� ,�� !
	�Ƚ������
	==		!=		<		>		<=		>=
	
	*/
	string name_answer = "GJL";
	string name_guess;
	cout << "guess my name" << endl;
	cin >> name_guess;

	string age_answer = "17";
	string age_guess;
	cout << "guess my age" << endl;
	cin >> age_guess;

	if (name_guess == name_answer && age_guess == age_answer)// &&�������
	{
		cout << "You are right" << endl;
		return 0;
	}
	if (name_guess == name_answer || age_guess == age_answer)// ||�������
	{
		cout << "You are right in one at least" << endl;
	}
	if (!(name_guess == name_answer) || age_guess == age_answer)//!�������
	{
		cout << "You got my age right and the other is wrong" << endl;
	}

	return 0;
}