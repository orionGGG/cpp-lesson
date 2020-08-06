#include<iostream>
#include<string>

using namespace std;

int main()
{
	/*
	逻辑运算符
	&& 与 ,|| 或 ,非 !
	比较运算符
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

	if (name_guess == name_answer && age_guess == age_answer)// &&与运算符
	{
		cout << "You are right" << endl;
		return 0;
	}
	if (name_guess == name_answer || age_guess == age_answer)// ||或运算符
	{
		cout << "You are right in one at least" << endl;
	}
	if (!(name_guess == name_answer) || age_guess == age_answer)//!否定运算符
	{
		cout << "You got my age right and the other is wrong" << endl;
	}

	return 0;
}