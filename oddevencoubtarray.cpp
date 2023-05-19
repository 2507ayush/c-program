#include<stdio.h>
int main()
{
	int ar[9]={1,22,3,10,5,6,7,8,9};
	int i,l,e=0,o=0,x,y;
	l=sizeof(ar)/sizeof(ar[0]);
	for(i=0;i<l;i++)
	{
		x=ar[i];
		if(x%2==0)
		e++;
		else 
		o++;
	}
	printf("total even number = %d \n",e);
	printf("total odd number = %d",o);
}

