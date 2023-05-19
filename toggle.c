#include<stdio.h>
#include<string.h>
int main()
/*{int i;
    char s[100],a[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
{
    if(s[i]>=65&&s[i]<=90)s[i]=s[i]+32;
    if(s[i]>=97&&s[i]<=122)s[i]=s[i]-32;

}
printf("%s",s);
return 0;
}*/

{
    char a[100],b[100];
    gets(a);gets(b);
    strlwr(a);strupr(b);
    puts(a);puts(b);
    return 0;
}