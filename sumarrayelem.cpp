#include<stdio.h>
int main()
{
	int ar[9]={1,2,3,4,5,6,7,8,9};
	int i,l,s=0,x;
	l=sizeof(ar)/sizeof(ar[0]);
	for(i=0;i<l;i++)
	{
		x=ar[i];
		s=s+x;
	}
	printf("sum=%d",s);
	
}
