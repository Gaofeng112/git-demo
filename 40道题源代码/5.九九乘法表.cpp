#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 10 - i; j++)
	      cout << i << "*" << j << "=" << setw(2) << j * i << "  ";
		cout << endl;
	}
	system("pause");
	return 0;
}