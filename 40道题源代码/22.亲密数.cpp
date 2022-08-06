#include<iostream>
using namespace std;
#include<cmath>
int close(int number)   //计算因数之和并返回
{
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
			sum += i;
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	/*while (cin>>n)
	{
		cout << close(n) << endl;
	}*/
	int m = 0;
	for (int i = 1; i < n; i++)
	{
		int j = close(i);
		if (close(i) == j && close(j) == i && i != j)
			if(i!=m)
		{
			cout << i << " " << j << endl;
			m = j;
		}
	}
	system("pause");
	return 0;
}