#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n) {
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int main()
{
	int n;
	cin >> n;
	cout << n << "=";
	if (isprime(n))cout << n;
	else
	{
		for (int j = 2; j < n; j++)
			if (isprime(j))
				while (n % j == 0)
				{
					n = n / j; 
					if (n == 1)
						cout << j;
					else
					cout << j << "*";
				}
		if (n != 1)
			cout << n;
	}
	return 0;
}