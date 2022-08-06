#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number = 0, n;
	cin >> number >> n;
	int yushu = 0, q[16] = { 0 }, i = 15;
	while (number)
	{
		yushu = number % 2;
		q[i--] = yushu;
		number /= 2;
	}	
	int p[16] = { 0 }, m = 0;
	for (int j = 0; j <= 15; j++)
	{
		if (j < n)
			p[j] = q[15 - n + 1 + j];
		else
			p[j] = q[m++];
	}
	int num = 0; 
	for (int j = 15; j >= 0; j--)
		num =num+ p[j] * pow(2,15-j);
	cout << num;
	return 0;
}