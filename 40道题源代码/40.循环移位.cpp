#include<iostream>
using namespace std;
void excg(int x[][10], int m,int n)
{
	int a = 0;
	a = x[m][n - 1];
	for (int i = n-1; i > 0; i--)
	{
		x[m][i] = x[m][i - 1];
	}
	x[m][0] = a;
}
int main()
{
	int n;
	cin >> n;
	int x[10][10];
	for (int i = 0; i < n; i++)
	{
			for (int j = 0; j < n; j++)
			{
				x[i][j] = j;
			}
		
	}
	for (int i = 0; i < n; i++)
	{
		for(int j=i;j>0;j--)
		{
			excg(x, i, n);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << x[i][j] << " ";

		}
		cout << endl;
	}
	system("pause");
	return 0;
}