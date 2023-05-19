#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
	int k,f,s=0,count=0,r;
	k=n;
	f=n;
	while(n>0)
	{
		n=n/10;
		count ++;
	}
	while(k!=0)
	{
		r=k%10;
		s=s+pow(r,count);
		k=k/10;
		}
	if (f==s)
	return 1;
	else
	return 0;
}
int main()
{
	int n,ans;
	printf("enter a number = ");
	scanf("%d",&n);
	ans=armstrong(n);
	if (ans==1)
	printf("armstrong number ");
	else 
	printf("not armstrong number");
}

