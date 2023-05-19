#include<stdio.h>
int main()
{
	int n,s=0,sq,r;
	printf("enter a number = ");
	scanf("%d",&n);
	sq=n*n;
	while(sq!=0)
	{
		r=sq%10;
		s=s+r;
		sq=sq/10;
		}
	if(s==n)
	printf("neon number");
	else 
	printf("not a neon number ");
}

