#include<stdio.h>
int main()
{int n;
printf("enter the n=\n");
scanf("%d",&n);
int A[n][n];
int B[n][n];
int C[n][n];   
int r, c, i, sum;
printf("Enter elements in matrix A of n %dx%d: \n", n, n);
for(r=0; r<n; r++)
{for(c=0; c<n; c++)
{scanf("%d", &A[r][c]);}}
printf("\nEnter elements in matrix B of n %dx%d: \n", n, n);
for(r=0;r<n;r++)
{for(c=0; c<n; c++)
{scanf("%d", &B[r][c]);}}
for(r=0;r<n;r++)
{for(c=0;c<n;c++)
{sum=0;
for(i=0; i<n; i++){sum+=A[r][i]*B[i][c];
}C[r][c]=sum;
}}printf("\nProduct of matrix A * B = \n");
for(r=0; r<n; r++)
{for(c=0; c<n; c++)
{printf("%d ",C[r][c]);}printf("\n");}return 0;}