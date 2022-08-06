#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	char str[255];
	cin.get(str, 255);
	int l = strlen(str);
	int sum = 0;
	for (int i = 0; i < l; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')||(str[i]>='a'&&str[i]<='z'))
		{
			for (int j = i + 1; j < l; j++)
			{
				if (!(str[j] >= 'a' && str[j] <= 'z'))
				{
					if ((str[j - 1] >= 'a' && str[j - 1] <= 'z')|| (str[j-1] >= 'A' && str[j-1] <= 'Z'))
						sum++;
				}
			}
			break;
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}