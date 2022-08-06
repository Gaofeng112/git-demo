#include<iostream>
using namespace std;
void xiaohan(int x[][10],int n, int m)
{
	int bi = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (j + 1 < m)
			{
				if (x[i][j] == x[i][j + 1])
				{
					bi++;
				}
				else
				{
					if (bi >= 3)
					{
						for (int z = 0; z < bi; z++)
						{
							x[i][j - z] = 0;
						}
					}
					n = 0;
				}
			}
			else
			{
				if (bi >= 3)
				{
					for (int z = 0; z < bi; z++)
					{
						x[i][j - z] = 0;
					}
				}
				n = 0;
			}
		}
}
void xiaonie(int x[][10], int n, int m)
{
	int bi = 0;
	for (int j = 0; j < m; j++)
		for (int i = 0; i < n; i++)
		{
			if (i + 1 < n)
			{
				if (x[i][j] == x[i + 1][j])
				{
					bi++;
				}
				else
				{
					if (bi >= 3)
					{
						for (int z = 0; z < bi; z++)
						{
							x[i - z][j] = 0;
						}
					}
					n = 0;
				}
			}
			else
			{
				if (bi >= 3)
				{
					for (int z = 0; z < bi; z++)
					{
						x[i - z][j] = 0;
					}
				}
				n = 0;
			}
		}
}
int main()
{
	int n, m;
	cin >> n >> m;
	int x[10][10] = { 0 };
	for(int i =0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> x[i][j];
		}
	xiaohan(x,n,m);
	xiaonie(x,n,m);
   for (int i = 0; i < n; i++)
   {
	   for (int j = 0; j < m; j++)
	   {
		   cout << x[i][j] << " ";
	   }
	   cout << endl;
   }
	system("pause");
	return 0;
}