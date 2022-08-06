#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int x[25][25];
	for (int i = 0; i < m; i++)
	{
		{
			for (int j = 0; j <= i; j++)
			{
				x[j][i] = n;
				n++;
			}
			for (int z = i - 1; z >= 0; z--)
			{
				x[i][z] = n;
				n++;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		if(i==0)
		for (int j = 0; j < m; j++)
			cout << setw(4) << x[i][j];
		else
		{
			for (int j = 0; j < m; j++)
				cout <<setw(4)<<x[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}