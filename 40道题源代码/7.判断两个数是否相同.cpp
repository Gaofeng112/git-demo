#include<iostream>
using namespace std;
#include<cstring>

void judge(char str[], char str1[])
{
	int l = strlen(str), n = strlen(str1);  //字符串的长度
	if (l == n)                              //长度相等时
	{
		int m = 1;                            //标计量
		for (int i = 0; i < l; i++)
		{
			m = 1; 
			for (int j = 0; j < l; j++)
			{
				if (str[i] == str1[j])          //两字符相等时
				{
					str1[j] = '99'; 
					m = 1;                      //把str1相等的那一位赋值为其它数					                     //m不变   
					break;                      //下一位继续比较
				} 
				m = 0;
			}
		   
			if (m == 0)                         //str中的i与str1中每一位比较完后，看m的值
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
	for (int i = 0; i < l; i++)        //把str的字符赋值给二维数组stt中
	{                        
		stt[i] = 1;              //第二位用来储存个数
	}
	for (int j = 0; j < l; j++)
		for (int z = j+1; z < l; z++)
		{
			if (str[j] == str[z])     //把多余的相同个数去掉
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
	char str[20], str1[20];   //定义两个字符数组
	cin >> str;
	cin >> str1;            //输入字符数组
	judge(str, str1);      //判断是否相等
	showstr(str);
	system("pause");
		return 0;
}
