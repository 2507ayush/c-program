#include<stdio.h>
int main()
{
	int n,i,r,f=1,s=0,k;
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		for(i=1;i<=r;i++)
		{
		f=f*i;
		}
		s=s+f;
		f=1;
		n=n/10;
	}
	if(s==k)
	printf("strong");
	else
	printf("not strong");
}

