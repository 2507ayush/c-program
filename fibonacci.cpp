#include<stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c,n;
	printf("enter no. of terms =");
	scanf("%d",&n);
	while(a<n)
	{
		printf("%d ",a);
		c=a;
		a=b;
		b=c+b;
	}
	
}
