#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int yushu = 0, s[100] = { 0 }, a = 0;
	cin >> n >> m;
	while (n != 0)
	{
		yushu = n % m;
		n = n / m;
		a++;
		s[a] = yushu;
	}
	for (int i = a; i >= 1; i--)
	{
		if (s[a] >= 10)
			cout << (char)(s[i] + 55);
		else
			cout << s[i];
	}
	return 0;
}