#include<stdio.h>
void main()
{
    int a,b,c,i,x;
    printf("ENTER NUMBER1 :- ");
    scanf("%d",&a);
    printf("ENTER NUMBER2 :- ");
    scanf("%d",&b);
    printf("NETER NUMBER3 :- ");
    scanf("%d",&c);
    if(a>b)
    {
        x=1;
        i=a*c;
    }
    else if(b>a)
    {
        x=2;
        i=b*c;
    }
    switch(x)
    {
        case 1:printf("%d * %d = %d",a,c,i); break;
        case 2:printf("%d * %d = %d",b,c,i); break;       
        default: printf("INVALID CONDITION");
    }
}