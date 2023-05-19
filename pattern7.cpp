#include<stdio.h>
int main()
{
	int i,j,k='A';
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",k);
			k=k+1;		
			}
		printf("\n");
	}
}
