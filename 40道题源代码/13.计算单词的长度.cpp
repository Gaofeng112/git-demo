#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i = 0; char c;
	while ( (c = cin.get()) != '.')
	{
		str[i] = c;
		i++;
	}
	cout << "Please input a line of words:" << endl;
	for (int c = 0; c < i; c++)
	{
		int z = 0;
		if (str[c] != ' ')
		{
			for (int d = c; d < i; d++)
			{
				if (str[d] != ' ')
				{
					cout << str[d];
					z++;
					if (d == i-1)
					{
						if (z > 0)
						{
							cout << ": " << z << endl;
							z = 0;
						}
					}
				}
				else
				{
					if (z>0)
					{
						cout << ": " << z << endl;
						z = 0;
					}
				}

			}
			break;
		}
	}
	system("pause");
	return 0;
}