#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float p;
	printf("enter priciple,rate,time =");
	scanf("%d%d%d",&a,&b,&c);
	p=a*(1+(b/c));
	printf("compound interest = %f",p);
	return 0;
}

