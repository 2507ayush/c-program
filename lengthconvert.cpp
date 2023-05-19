#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	float m,km;
	printf("enter the length in centimeter = ");
	scanf("%d",&a);
	m=a/100;
	km=m/1000;
	printf("length in meter = %f \n",m);
	printf("length in kilo meter = %f \n",km);
	return 0;
}

	
