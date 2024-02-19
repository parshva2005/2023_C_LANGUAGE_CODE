#include<stdio.h>
void main()
{
    int a,b,c;
    printf("ENTER NUMBER1 :- ");
    scanf("%d",&a);
    printf("ENTER NUMBER2 :- ");
    scanf("%d",&b);
    printf("ENTER NUMBER3 :- ");
    scanf("%d",&c);
    a>b?(a>c?printf("NUMBER1 IS LARGEST"):printf("NUMBER3 IS LARGEST")):(b>c?printf("NUMBER2 IS LARGEST"):printf("NUMBER3 IS LARGEST"));
}