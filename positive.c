#include <stdio.h>
int n;
void main()
{
	scanf("%d",&n);
	if(n>0)
	{
		printf("Positive");
	}
	else if(n==0)
	{
		printf("Zero");
	}
	else
	{
		printf("Negative");
	}
}
