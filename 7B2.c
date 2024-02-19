#include<stdio.h>
void main()
{
    char a,i;
    printf("ENTER A CHARACTER :- ");
    scanf("%c",&a);
    a>='A' && a<='Z' || a>='a' && a<='z'?printf("YOUR CHARACTER IS ALPHABET"):printf("YOUR CHARACTER IS NOT ALPHABET");
}