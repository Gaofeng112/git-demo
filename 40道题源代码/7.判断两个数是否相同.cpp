#include<iostream>
using namespace std;
#include<cstring>

void judge(char str[], char str1[])
{
	int l = strlen(str), n = strlen(str1);  //�ַ����ĳ���
	if (l == n)                              //�������ʱ
	{
		int m = 1;                            //�����
		for (int i = 0; i < l; i++)
		{
			m = 1; 
			for (int j = 0; j < l; j++)
			{
				if (str[i] == str1[j])          //���ַ����ʱ
				{
					str1[j] = '99'; 
					m = 1;                      //��str1��ȵ���һλ��ֵΪ������					                     //m����   
					break;                      //��һλ�����Ƚ�
				} 
				m = 0;
			}
		   
			if (m == 0)                         //str�е�i��str1��ÿһλ�Ƚ���󣬿�m��ֵ
			{
				cout << "0" << endl; return;
			}
		}
		if(m==1)
		cout << "1" << endl;
	}
	else
		cout << "0" << endl;
};

void showstr(char str[])
{
	int l = strlen(str);
	int stt[20];
	for (int i = 0; i < l; i++)        //��str���ַ���ֵ����ά����stt��
	{                        
		stt[i] = 1;              //�ڶ�λ�����������
	}
	for (int j = 0; j < l; j++)
		for (int z = j+1; z < l; z++)
		{
			if (str[j] == str[z])     //�Ѷ������ͬ����ȥ��
			{
				str[z] = '0'; str[z] = '0';
				stt[j]+=1;
			}
	    }
	for(int i =0;i<l-1;i++)
		for (int j = i + 1; j < l; j++)
		{
			char a; int c = 0;
			if (str[j] < str[i])
			{
				a = str[i];str[i] = str[j];str[j] = a;
				c = stt[i]; stt[i] = stt[j]; stt[j] = c;
			}
		}
	for (int i = 0; i < l; i++)
	{
		if (str[i] != '0')
			cout << str[i] << " " << stt[i] << endl;
	}
};

int main()
{
	char str[20], str1[20];   //���������ַ�����
	cin >> str;
	cin >> str1;            //�����ַ�����
	judge(str, str1);      //�ж��Ƿ����
	showstr(str);
	system("pause");
		return 0;
}
