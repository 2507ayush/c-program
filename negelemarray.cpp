#include<stdio.h>
int main()
{
	int ar[9]={1,-2,-3,4,-5,6,-7,-8,9};
	int i,l,x;
	l=sizeof(ar)/sizeof(ar[0]);
	for(i=0;i<l;i++)
	{
		x=ar[i];
		if(x<0)
		printf("%d",ar[i]);
		printf("\n");		
	}
	
}
