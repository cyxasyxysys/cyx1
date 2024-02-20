#include<stdio.h>
int main()
{
	int a,i, b,j = 0;
	int c[80];
	scanf_s("%d",&a);
	b = a;
	for (i = 2; ; i++)
	{
		if (a % i == 0)
		{
			c[j] = i;
			a = a/i;
			j++;
			i = 1;
		}
		if (i > a / 2)
		{
            break;
		}
			
	}
	c[j ] = a;
	printf("%d=", b);
	for (i = 0; i <= j; i++)
	{
		printf("%d", c[i]);
	    if (c[i+1] <= 0)
			break;
		printf("*");
	}
}