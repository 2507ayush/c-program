#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int no,s=0,count=0,r,l,k,f;
	printf("enter a number = ");
	scanf("%d",&no);
	k=no;
	f=no;
	while(no>0)
	{
		no=no/10;
		count=count+1;
	}
	while(k!=0)
	{
		l=k%10;
		s=s+pow(l,count);
		k=k/10;
	}
	if(s==f)
	printf("armstrong number");
	else
	printf("not a armstrong number");
    return 0;
}


