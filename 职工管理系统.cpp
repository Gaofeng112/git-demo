#include<iostream>
using namespace std;
#include"workerManager.h"
int main()
{
	//ʵ�����������
	WorkerManager wm;

	//�û���ѡ��
	int choich = 0;

	while (true)
	{
		//����չʾ�˵��ĳ�Ա����
		wm.show_Menu();

		cout << "���������ѡ��  " << endl;
		cin >> choich; //���ܵ��û�ѡ��

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