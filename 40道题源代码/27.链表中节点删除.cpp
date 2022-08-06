#include<iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int x[100] = { 0 };
	for (int i = 0; i < n; i++)
		cin >> x[i];
	int m; cin >> m;
	for (int j = 0; j < n; j++)
		cout << x[j] << " ";
	cout << endl;
	for (int j = 0; j < n; j++)
	{
		if (x[j] != m)
			cout << x[j] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}