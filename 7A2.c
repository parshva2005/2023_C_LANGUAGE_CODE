#include<stdio.h>
void main()
{
    int a;
    printf("ENTER A NUMBER OF MONTH :- ");
    scanf("%d", &a);
    switch (a)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 DAYS"); break;
        case 2: printf("28 DAYS"); break;
        case 4: case 6: case 9: case 11:
        printf("30 DAYS"); break;
        default: printf("INVALID MONTH");
    }
}