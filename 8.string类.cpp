#include<iostream>
#include<string>

using namespace std;

int main()
{
	std::string s;//默认创建的是空字符串--->""
	std::string str = "Hello guys";//字符串对象创建方法
	std::string complete_str = str + " 123";

	cout << s << endl;
	cout << str << endl;
	cout << str[1] << endl;
	cout << str + " my friends" << endl;
	cout << complete_str << endl;
	cout << complete_str.length() << endl;//调用string类里的length方法
	//method == member function == functions attached to objects  方法是对象包含的函数


	//c中的字符串--->c string == array of characters "haha\0"-->5个字符,c中无法轻易改变字符串大小
	char name[] = "haha";

	//cpp中不同,可以自行改变
	complete_str = "no no no";
	cout << complete_str << endl;

	std::string q1;
	std::string q2;
	cin >> q1;
	cout << q1 << endl;

	//保证空格也能输入，不会断开
	getline(cin, q2);
	cout << q2 << endl;

	//cin.getline在string类出来前就有,现在没有getline好用
	char q3[10];
	cin.getline(q3, 10);

	//string函数
	std::string w1 = "gaga";
	w1.length();//length与size相同，用法看习惯
	w1.size();

	w1 += "wawa";//左述两种方法相同
	w1.append("ohoh");

	w1.insert(3, " ");//在索引3处插入
	w1.erase(3, 1);//删除索引3处后面长度为1字符，只写入前面一个参数则代表删除该索引处后面全部
	w1.erase(w1.length() - 1);//删除最后一个字符
	w1.pop_back();//删除最后一个字符
	w1.replace(0, 3, "qqq");//从索引0处开始，长度为3，转变为qqq，要是写多了后面的也被替换
	cout << w1 << endl;


	std::string e1 = "what are you fucking say?";
	cout << e1.find("fucking") << endl;//寻找到索引
	cout << e1.replace(e1.find("fucking"), 4, "****") << endl;//将索引后面的替换
	cout << e1.substr(5, 3) << endl;//选取从索引5开始长度为3的字符串
	cout << e1.find_first_of("aeiou") << endl;
	cout << e1.find_first_of("!") << endl;//npos
	unsigned long x = -1;
	cout << x << endl;
	if (e1.find_first_of("!") == -1)//npo的用途
	{
		cout << "Not Found" << endl;
	}
	/*npos means it wasn't found and npos == -1;
	  但是e1.find_first_of()返回的是unsigned long 类型
	  而unsigned long不能存储负数
	  所以返回了奇怪的数字
	*/

	std::string r1 = "what are you doing";
	if (r1 == "what are you doing")//在c++中 == 与java中的equal一样，java不能使用 == 来比较字符串
	{
		cout << "equal" << endl;
	}
	if (r1.compare("what are you doing") == 0)//compare()函数结果如果一样则为0，主要用 == ,这个不重要
	{
		cout << "equal" << endl;
	}

}