#include<iostream>
using namespace std;
#include<string.h>
int value(char *s)
{
	int c = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			c = c * 10 + (s[i] - '0');
	}
	return c;
}
int main()
{
	char str[100];
	cin >> str;
	int m=value(str);
	cout << m << endl;
	system("pause");
	return 0;
}