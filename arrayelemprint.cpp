#include<stdio.h>
int main()
{
	int ar[9]={1,2,3,4,5,6,7,8,9};
	int i,l;
	l=sizeof(ar)/sizeof(ar[0]);
	for(i=0;i<l;i++)
	{
		printf("array elements are = %d",ar[i]);
		printf("\n");
	}
	
}
