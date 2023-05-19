#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float p;
	printf("enter two angles of triangle =");
	scanf("%d%d",&a,&b);
	p=180-(a+b);
	printf("3rd angle = %f",p);
	return 0;
}

