#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	while (i <=(2*n-2))
	{
		if (i < n)
		{
			for (int j = 0; j < 2 * n - 1; j++)
			{
				if (n - 1 - i == j || n - 1 + i == j)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		else
		{
			for (int j = 0; j < 2 * n - 1; j++)
			{
				if (i-(n-1)==j ||(2*n-2-i+n-1) == j)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		i++;
	}
	system("pause");
	return 0;
}