#include<iostream>
#include<string>

using namespace std;

int main()
{
	std::string s;//Ĭ�ϴ������ǿ��ַ���--->""
	std::string str = "Hello guys";//�ַ������󴴽�����
	std::string complete_str = str + " 123";

	cout << s << endl;
	cout << str << endl;
	cout << str[1] << endl;
	cout << str + " my friends" << endl;
	cout << complete_str << endl;
	cout << complete_str.length() << endl;//����string�����length����
	//method == member function == functions attached to objects  �����Ƕ�������ĺ���


	//c�е��ַ���--->c string == array of characters "haha\0"-->5���ַ�,c���޷����׸ı��ַ�����С
	char name[] = "haha";

	//cpp�в�ͬ,�������иı�
	complete_str = "no no no";
	cout << complete_str << endl;

	std::string q1;
	std::string q2;
	cin >> q1;
	cout << q1 << endl;

	//��֤�ո�Ҳ�����룬����Ͽ�
	getline(cin, q2);
	cout << q2 << endl;

	//cin.getline��string�����ǰ����,����û��getline����
	char q3[10];
	cin.getline(q3, 10);

	//string����
	std::string w1 = "gaga";
	w1.length();//length��size��ͬ���÷���ϰ��
	w1.size();

	w1 += "wawa";//�������ַ�����ͬ
	w1.append("ohoh");

	w1.insert(3, " ");//������3������
	w1.erase(3, 1);//ɾ������3�����泤��Ϊ1�ַ���ֻд��ǰ��һ�����������ɾ��������������ȫ��
	w1.erase(w1.length() - 1);//ɾ�����һ���ַ�
	w1.pop_back();//ɾ�����һ���ַ�
	w1.replace(0, 3, "qqq");//������0����ʼ������Ϊ3��ת��Ϊqqq��Ҫ��д���˺����Ҳ���滻
	cout << w1 << endl;


	std::string e1 = "what are you fucking say?";
	cout << e1.find("fucking") << endl;//Ѱ�ҵ�����
	cout << e1.replace(e1.find("fucking"), 4, "****") << endl;//������������滻
	cout << e1.substr(5, 3) << endl;//ѡȡ������5��ʼ����Ϊ3���ַ���
	cout << e1.find_first_of("aeiou") << endl;
	cout << e1.find_first_of("!") << endl;//npos
	unsigned long x = -1;
	cout << x << endl;
	if (e1.find_first_of("!") == -1)//npo����;
	{
		cout << "Not Found" << endl;
	}
	/*npos means it wasn't found and npos == -1;
	  ����e1.find_first_of()���ص���unsigned long ����
	  ��unsigned long���ܴ洢����
	  ���Է�������ֵ�����
	*/

	std::string r1 = "what are you doing";
	if (r1 == "what are you doing")//��c++�� == ��java�е�equalһ����java����ʹ�� == ���Ƚ��ַ���
	{
		cout << "equal" << endl;
	}
	if (r1.compare("what are you doing") == 0)//compare()����������һ����Ϊ0����Ҫ�� == ,�������Ҫ
	{
		cout << "equal" << endl;
	}

}