#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float p;
	printf("enter two numbers =");
	scanf("%d%d",&a,&b);
	p=pow(a,b);
	printf("power = %f",p);
	return 0;
}

