#include<stdio.h>
int main()
{
	int n = 1000;
	int i = 0;
	for (i = 1; i<=n; i++)
	{   
		int j = 0;
		if (i == 1)
		{
			printf("%d\n", i);
			continue;
		}
		int h = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				h = h + j;
			}
		}
		if (h == i)
		{
			printf("%d\n", i);
		}
	}



}