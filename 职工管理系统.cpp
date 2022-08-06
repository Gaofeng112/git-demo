#include<iostream>
using namespace std;
#include"workerManager.h"
int main()
{
	//实例化管理对象
	WorkerManager wm;

	//用户的选择
	int choich = 0;

	while (true)
	{
		//调用展示菜单的成员函数
		wm.show_Menu();

		cout << "请输入你的选择  " << endl;
		cin >> choich; //接受的用户选项

		switch (choich)
		{
		case 0:
				break;
		case 1:
			break;
			default:
				break;
		}
	}
	system("pause");
	return 0;
}