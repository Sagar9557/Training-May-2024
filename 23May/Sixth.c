#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("First is gratest");
	}
	else if(b>a && b>c)
	{
		printf("Second is greatest");
	}
	else
	{
		printf("Third is greatest");
	}
	return 0;
}


