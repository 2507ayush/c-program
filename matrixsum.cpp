#include<stdio.h>
int main()
{
	int i,j,e,f,c,d;
	int a[3][3],b[3][3],result[3][3];
	printf("enter the elements of first matrix\n");
	for(i=0;i<3;++i)
	for(j=0;j<3;++j)
	{
		scanf("%d",&a[i][j]);
		}
	printf("enter elements of 2nd matrix = ");
	for(i=0;i<3;++i)
	for(j=0;j<3;++j)
	{
		scanf("%d",&b[i][j]);
		}
	for(i=0;i<3;++i)
	for(j=0;j<3;++j)
	{
		result[i][j]=a[i][j] + b[i][j];
	}
	printf("sum of matrix=\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",result[i][j]);
		}
		printf("/n");
	}
	return 0;
}

