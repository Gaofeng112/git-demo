#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	char str[100];
	char c; int i = 0;
	while ((c = cin.get()) != EOF)
	{
		str[i] = c;
		i++;
	}
	int N_W = 0, N_M = 0, N_Z = 0;
	for (int j = 0; j < i; j++)
	{
		if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
			N_W++;
		else if (str[j] >= '0' && str[j] <= '9')
			N_M++;
		else
			N_Z++;
	}
	cout << N_W << endl;
	cout << N_M << endl;
	cout << N_Z << endl;
	system("pause");
	return 0;
}