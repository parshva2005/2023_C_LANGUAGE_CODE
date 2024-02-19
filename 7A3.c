#include<stdio.h>
void main()
{
    int a,b,ch,an;
    printf("ENTER A NUMBER1 :- ");
    scanf("%d",&a);
    printf("ENTER A NUMBER2 :- ");
    scanf("%d",&b);
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLYCATION\n");
    printf("4.DIVISION\n");
    printf("ENTER A CHOICE :- ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: an=a+b; printf("%d + %d = %d",a,b,an); break;
        case 2: an=a-b; printf("%d - %d = %d",a,b,an); break;
        case 3: an=a*b; printf("%d * %d = %d",a,b,an); break;
        case 4: an=a/b; printf("%d / %d = %d",a,b,an); break;
        default: printf("INVALID CHOICE");
    }
}