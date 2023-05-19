/* Q.Check for palindrome string prg?

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[100];
	int l,rev=0,r;
	printf("enter a string = ");
	scanf("%s",&s);
	l=strlen(s);
	for(r=0;r<l;r++)
	{
		if(s[0]!=s[l-1])
		rev=1;
	}
	if(rev==1)
	printf("not palindrome");
	else 
	printf("palindrome");
}
*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,count=0,l;
	printf("enter a sentence = ");
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		count=count+1;
	}
	printf("no. of words in the sentence are = %d",count);
}

	


