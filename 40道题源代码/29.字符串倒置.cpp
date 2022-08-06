#include<iostream>
using namespace std;
#include<string.h>
void inverseString(char *s)
{
	int l = strlen(s);
	for (int i = 0; i < l; i++)
	{
		if (i < l - 1 - i)
		{
			char m;
			m = s[i]; s[i] = s[l - 1 - i]; s[l - 1 - i] = m;
		}
	}
}
int main()
{
	char str[200] = { 0 };
	int i = 0;  char c;
	while ((c= cin.get()) != EOF)
	{
		str[i] = c;
		i++;
	}
	inverseString(str);
	int l = strlen(str);
	for (int i = 0; i < l; i++)
		cout << str[i];	
	system("pause");
	return 0;
}