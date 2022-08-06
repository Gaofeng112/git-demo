#include<iostream>
using namespace std;
int main()
{
	long m, n;
	cin >> m >> n;
	int max = 1;
	for (int i = 1; i < m; i++)
	{
		if (m % i == 0 && n % i == 0)
			max = i;
	}
	cout << max << " " << m / max * n << endl;
	system("pause");
	return 0;
}