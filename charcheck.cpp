#include <stdio.h>

int main()
{
    char cs;
    printf("enter a character=");
    scanf("%c",&cs);
    if(cs>='a'&& cs<='z' || cs>='A'&&cs<='Z')
    printf("Alphabet");
    else if(cs>='0'&&cs<='9')
    printf("digit");
    else 
    printf("special character");
    return 0;
}


