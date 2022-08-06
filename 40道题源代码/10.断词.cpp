#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char word[10], sent[100];
	cin >> word;
	cin >> sent;
	int i = strlen(word);
	int j = strlen(sent);
	char sent2[100]; int y = 0;

	for (int z = 0; z < j; )
	{
		if (sent[z] == word[0]||sent[z] == word[0]+32||sent[z] == word[0]-32)
		{
			int n = 0;
			for (int m = 0; m < i; m++)
			{
				if (sent[z+m] == word[m] || sent[z+m] == word[m] + 32 || sent[z+m] == word[m] - 32)
					n = 1;
				else
				{
					n = 0; break;
				}
			}
			if (n == 1)
			{
				if (z > 0 && sent2[y - 1] != ' ')
				{
					sent2[y] = ' '; y++;
				}
				for (int m = 0; m < i; m++)
				{
					sent2[y] = sent[z + m];
					y++;
				}
				if (z + i < j)
				{
					sent2[y] = ' '; y++;
				}
				z = z + i;
			}
			else
			{
				sent2[y] = sent[z];
				z++; y++;
			}
				
		}
		else
		{
			sent2[y] = sent[z];
			z++; y++;
		}
	}
	cout << sent2;
	system("pause");
	return 0;
}