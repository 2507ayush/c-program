#include<stdio.h>
int main()
{
	int ar[9]={1,2,3,4,5,6,7,8,9};
	int a[9];
	int i,l,j;
	l=sizeof(ar)/sizeof(ar[0]);
	for(i=0;i<l;i++)
	{
		a[i]=ar[i];
	}
	for(j=0;j<l;j++)
	{
		printf("%d",a[j]);
		}
	}

