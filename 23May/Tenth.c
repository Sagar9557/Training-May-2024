#include<stdio.h>

int main()
{
	int a,b;
	char ch;
	printf("Enter the two numbers and character");

	scanf("%d %d\n",&a,&b);
	scanf("%c",&ch);
	if(ch == '+')
	{
		printf("add= %d",a+b);
	}
	else if(ch == '-')
	{
		printf("sub= %d",a-b);
	}
	else if(ch == '*')
	{
		printf("multi= %d", a*b);
	}
	else if(ch == '/')
	{
		printf("divide= %d",a/b);
	}
	else
	{
		printf("Wrong Character");
	}
	return 0;
}

