#include <iostream> 
#include <Windows.h>
#include <string> 
using namespace std; 
int main(void) 
{ 
	string name; 
	string pwd;
	while (1) 
	{
		system("cls");
		std::cout << "�������˺ţ�";
		std::cin >> name; std::cout << "���������룺"; 
		std::cin >> pwd;
		if (name == "54hk" && pwd == "123456")
		{ 
			break; 
		} else {
			system("pause");
			cout << "�û������������!" << endl; 
		}
	}
	system("cls"); 
	std::cout << "1.��վ 404 ����" << std::endl; 
	std::cout << "2.��վ�۸Ĺ���" << std::endl;
	std::cout << "3.��վ������¼" << std::endl;
	std::cout << "4.DNS ����" << std::endl;
	std::cout << "5.��������������" << std::endl; 
	system("pause"); 
	return 0;
}