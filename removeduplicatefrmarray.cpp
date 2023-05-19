#include<stdio.h>

int main()
{
	int n,i,c,j,k;
	printf("enter length of array = ");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of array = \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
			n--;
			j--;
		}
	}
}

	for(i=0;i<n;i++)
	printf("%d,",a[i]);
	return 0;
}

