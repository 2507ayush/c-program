#include<stdio.h>
int s(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	printf("enter two number = ");
	scanf("%d%d",&a,&b);
	int sum=s(a,b);
	printf("sum =%d",sum);
	}

