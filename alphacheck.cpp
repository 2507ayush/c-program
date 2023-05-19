#include <stdio.h>

int main()
{
    char cs;
    printf("enter a character=");
    scanf("%c",&cs);
    if(cs>='a' || cs<='z' && cs>='A' || cs<='Z')
    printf("alphabet");
    else
    printf("not alphabet");
    
}
