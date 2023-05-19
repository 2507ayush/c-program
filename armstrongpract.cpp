#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,g,l,k,count,sum;
	sum=0;
	count=0;
	scanf("%d",&n);
	k=n;
	g=n;
	while(n!=0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	while(k!=0)
	{
		l=k%10;
		sum=sum+pow(l,count);
		k=k/10;
	}
	if(sum==g)
	printf("armstrong");
	else
	printf("not armstrong");
}

