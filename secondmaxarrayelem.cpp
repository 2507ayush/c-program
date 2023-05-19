#include<stdio.h>
int main()
{
	int ar[9]={1,22,3,10,5,6,7,8,9};
	int i,l,max,x,y;
	l=sizeof(ar)/sizeof(ar[0]);
	max=ar[0];
	for(i=0;i<l;i++)
	{
		if(max<ar[i])
		max=ar[i];
	}
	printf("maximum = %d \n",max);
}

