#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	int m; cin >> m;
	for (int i = 0; i < n; i++)
	{
		if(x[i]!=m)
		cout<< x[i]<<" ";
	}
	system("pause");
	return 0;
}