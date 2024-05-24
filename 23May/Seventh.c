#include<stdio.h>
int main()
{
	int m;
	printf("Enter the marks");
	scanf("%d",&m);
	if(m>=90 && m<=100)
	{
		printf("------A-------");
	}
	else if(m>=80 && m<=89)
	{
		printf("-------B------");
	}
	else if(m>=70 && m<=79)
	{
		printf("------C-------");
	}
	else if(m>=60 && m<=69)
	{
		printf("-----D--------");
	}
	else
	{
		printf("-------F------");
	}
	return 0;
}
