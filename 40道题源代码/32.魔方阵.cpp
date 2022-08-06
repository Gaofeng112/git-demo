#include<iostream>
using namespace std;
int a[20][20];
int main() {
	int n; cin >> n;
	for (int i = 1; i <= 2 * n - 1; i++) {
		for (int j = 1; j <= 2 * n - 1; j++) {
			if (abs(i - n) > abs(j - n))a[i][j] = n - abs(i - n);
			else a[i][j] = n - abs(j - n);

		}
	}
	for (int i = 1; i <= 2 * n - 1; i++) {
		for (int j = 1; j <= 2 * n - 1; j++)
			cout << a[i][j];
		cout << endl;
	}
}