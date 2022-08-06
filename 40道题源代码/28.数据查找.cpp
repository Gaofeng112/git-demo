#include<iostream>
using namespace std;
int findx(int x[], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		if (x[i] == m)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
	return 0;
}
int main()
{
	int n;
	cin >> n;
	int x[100];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	int m; cin >> m;
	findx(x, n, m);
	system("pause");
	return 0;
}