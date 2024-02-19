#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float d,e,f;
    printf("ENTER NUMBER a :- ");
    scanf("%d",&a);
    printf("ENTER NUMBER b :- ");
    scanf("%d",&b);
    printf("ENTER NUMBER c :- ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        if(a!=0)
        {
            e=((-b)+(sqrt(d)))/2*a;
            f=((-b)-(sqrt(d)))/2*a;
            printf("ROOT IS :- %.2f OR %.2f",e,f);
        }
        else
        {
            e=c/b;
            printf("%.2f",e);
        }
    }
    else
    {
        printf("INVALID VALUE");
    }
}