#include <stdio.h>

int main()
{
    char cs;
    printf("enter a alphabet=");
    scanf("%c",&cs);
    if(cs=='a' || cs=='A' || cs=='E' || cs=='e' || cs=='E' || cs=='i' || cs=='I' || cs=='o' || cs=='O' || cs=='u' || cs=='U')
    printf("vowel");
    else
    printf("consonant ");
}

