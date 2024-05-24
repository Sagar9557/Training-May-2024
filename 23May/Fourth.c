#include<stdio.h>
int po(int n)
{
	int re=1;
	for(int i=0;i<n;i++)
	{
		re=re*2;
	}
	return re;
}
int main(){
	int b,x=0;
	int sum=0;
	printf("Enter the number in binary");
	scanf("%d",&b);
	
	while(b>0)
	{
		int r=b%10;
		if(r==1)
		{

			sum=sum+po(x);
		}
		x++;
		b=b/10;
	}
	printf("%d",sum);
	return 0;
}


