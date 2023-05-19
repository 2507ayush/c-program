#include<stdio.h>
int main()
{
	int n,r,s=0,k,f=0;
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		for(int i=0;i<r;i++)
		{
			f=f+r;
		}
		n=n/10;
	}
	printf("%d",&f);
	if(k==f)
	printf("perfect");
	else
	printf("not perfect");
}

