#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int su(int m);//�ж����� 
void huan(int t);//���� 
int n;//(ȫ�ֱ���) 
int a[50] = { 0 };//���� 
int b[50] = { 0 };//��¼���Ƿ�ʹ�� 
int main()
{
	cin >> n;
	a[0] = 1;
	b[0] = 1;
	huan(1);//���ֵΪ1�Ļ�����ֱ�Ӹ���������Ϊ1 
	return 0;

}
void huan(int t) {
	int i;
	if (t == n && su(a[n - 1] + a[0]))//����������� 
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
			if (b[i - 1] == 0)//����û�б�ʹ�ù� 
			{
				a[t] = i;
				b[i - 1] = 1;
				if (su(a[t] + a[t - 1]))
				{
					huan(t + 1);//��ʼ�ݹ� 
				}
				b[i - 1] = 0;//��ԭ��ʼ״̬ 
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


