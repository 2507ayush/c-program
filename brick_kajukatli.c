// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("enter the number of rows=\n");
//     scanf("%d",&n);
//    /* for(i=n;i>1;i--)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if(j>=i){if(j==i||j==n)printf("* ");else printf("  ");}
//             else printf(" ");
//         }
//     printf("\n");}*/
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if(j>=i){if(j==i||j==n)printf("* ");else printf("  ");}
//             else printf(" ");
//         }
//     printf("\n");}
//     return 0;
// }#include <stdio.h>
int main()
{
  int n, c, k;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= n-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
  }

  return 0;
}