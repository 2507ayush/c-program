#include<stdio.h>

int neon(int n)
{
	int sq,s=0,r ;
	sq=n*n;
	while(sq!=0)
	{
		r=sq%10;
		s=s+r;
		sq=sq/10;
		}
	if(s==n)
	return 1;
	else 
	return 0;
}
int main()
{
	int n,ans;
    printf("enter a number ");
    scanf("%d",&n);
    ans=neon(n);
    if (ans==1)
    printf("neon number ");
    else 
    printf("not neon number ");
}

    
