#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int su(int m);//判断素数 
void huan(int t);//回溯 
int n;//(全局变量) 
int a[50] = { 0 };//存数 
int b[50] = { 0 };//记录数是否被使用 
int main()
{
	cin >> n;
	a[0] = 1;
	b[0] = 1;
	huan(1);//求初值为1的环，故直接给函数复制为1 
	return 0;

}
void huan(int t) {
	int i;
	if (t == n && su(a[n - 1] + a[0]))//输出环的条件 
	{
		i = 0;
		while (i < n)
		{
			cout << a[i] << " ";
			i++;
		}
		cout << endl;
	}
	else {
		i = 2;
		while (i <= n)
		{
			if (b[i - 1] == 0)//此数没有被使用过 
			{
				a[t] = i;
				b[i - 1] = 1;
				if (su(a[t] + a[t - 1]))
				{
					huan(t + 1);//开始递归 
				}
				b[i - 1] = 0;//还原初始状态 
			}
			i++;
		}
	}
}
int su(int m)
{
	int i;
	if (m < 3) return 0;
	else {
		for (i = 2; i <= sqrt(m); i++) {
			if (m % i == 0) {
				return 0;
				break;
			}
		}
	}
	return 1;
}


