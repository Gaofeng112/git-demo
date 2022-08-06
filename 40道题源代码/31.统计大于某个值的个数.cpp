#include<iostream>
using namespace std;
double avgData(double x[], int n)
{
	double sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += x[i];
	}
	return sum / n;
}
int count(double x[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] > avgData(x, n))
			sum++;
	}
	return sum ;
}
int main()
{
	int n;
	cin >> n;
	double x[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	avgData( x, n);
	int sum=count(x, n);
	cout << sum << endl;
	system("pause");
	return 0;
}