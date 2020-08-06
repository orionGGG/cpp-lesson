#include<iostream>

using namespace std;//放在这里整个文件都适用

//using std::cout;表示cout函数使用std命名空间

int main()//main function
{

	//std是标准命名空间，std::cout表示使用std中的cout函数，这样做是为了防止命名冲突
	
	//using namespace std;放在这里仅在花括号内适用

	cout << "来点作用吧，销户" << endl;
	return 0;
}