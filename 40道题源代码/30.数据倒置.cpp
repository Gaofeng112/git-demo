#include<iostream>
using namespace std;
void input(int x[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> x[i];
}
void print(int x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
		if ((i + 1) % 4 == 0)
			cout << endl;
	}
}
void inverse(int x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1 - i)
		{
			int c = 0;
			c = x[i]; x[i] = x[n - i - 1]; x[n - i - 1] = c;
		}
	}
}
int main()
{
	int n, x[100] = { 0 };
	cin >> n;
	input(x, n);
	inverse(x, n);
	print(x, n);
	system("pause");
	return 0;
}