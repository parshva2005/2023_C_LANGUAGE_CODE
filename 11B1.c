//fibonaci series
#include<stdio.h>
void main(){
    int i,a=0,b=1,c,x;
    printf("ENTER NUMBER :- ");
    scanf("%d",&x);
    printf("%d,",a);
    printf("%d,",b);
    for(i=0;i<=x;i++){
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    printf("\b");
}
/*
0,1,1,2,3,5,8,13....
*/