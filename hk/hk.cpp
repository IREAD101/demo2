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
		std::cout << "ÇëÊäÈëÕËºÅ£º";
		std::cin >> name; std::cout << "ÇëÊäÈëÃÜÂë£º"; 
		std::cin >> pwd;
		if (name == "54hk" && pwd == "123456")
		{ 
			break; 
		} else {
			system("pause");
			cout << "ÓÃ»§Ãû»òÃÜÂë´íÎó!" << endl; 
		}
	}
	system("cls"); 
	std::cout << "1.ÍøÕ¾ 404 ¹¥»÷" << std::endl; 
	std::cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << std::endl;
	std::cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << std::endl;
	std::cout << "4.DNS ¹¥»÷" << std::endl;
	std::cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << std::endl; 
	system("pause"); 
	return 0;
}