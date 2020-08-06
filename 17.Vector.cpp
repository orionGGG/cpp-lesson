#include<iostream>
#include<vector>


//How to pass vector to function
void print_vector(std::vector<int> vec)
/*print�����е�vector��main�����еĲ�����һ��,print������main�����ĸ��ƹ����˶���,��������Ҳ��ͬ��
����ζ�����ǶԺ����ڲ��������κθ��Ķ�����Ӱ��main�����ڲ�
 (std::vector<int> & vec)����������(����+)main�������ⲿ��������ͬһ������,Ҳ����reference
�����������,��������ʱ�Զ�˥��Ϊָ��,���Կ���ֱ���޸�
*/
{
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << "\t";
	}
	std::cout << "\n";
}


int main()
{

	//vector
	std::vector<int> items = { 12,13 };
	items.push_back(100);//������ĩβ����Ԫ��100
	std::cout << items.size() << std::endl;//��������Ĵ�С
	std::cout << items[1] << std::endl;//��arrayһ������ͨ�����������õ�����Ԫ��
	std::cout << items[items.size() - 1] << std::endl;//���һ��Ԫ��
	items.pop_back();//ɾ�������е����һ��Ԫ��
	std::cout << items.size() << std::endl;

	/*
	Arraylist
	dynamic sized
	vector�Ƕ�̬��,����ʹ��push_back()��������Ԫ�ص�ʱ����������������ķ����ڴ�
	�����ͻ����·����ڴ�,ʹ�����ܰ��������Ԫ��,��һ�ж���Ļ����,�о�����
	�����������ƾ����ݲ���������·�����ڴ���
	*/



	std::vector <int> data = { 1,2,3,4,5,6,7 };
	print_vector(data);

	int a;
	std::vector <int> jax;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> a;
		jax.push_back(a);
	}
	print_vector(jax);




	return 0;
}