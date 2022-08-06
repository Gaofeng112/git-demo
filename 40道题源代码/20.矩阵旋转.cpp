#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int n;
	cin >> n;
	int m = 1, x[10][10] = { 0 };
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			x[i][j] = m;
			m++;
		}
	for (int j = 0; j <n; j++)
	{
		for (int i = n - 1; i >= 0; i--)
			cout << setw(4) << x[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}