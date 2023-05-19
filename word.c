#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char a[100],b[100],c[100];
    scanf("%[^\n]s",a);
    strrev(a);
   strcat(a," ");
    for(i=0;a[i];i++)
    {
        if(a[i]==' '){b[j]='\0';
strrev(b);
strcat(c,b);
strcat(c," ");
;j=0;
        }
        else {
            b[j]=a[i];j++;
        }
    }puts(c);
    return 0;
}