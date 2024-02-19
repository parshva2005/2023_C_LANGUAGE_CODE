#include<stdio.h>
void main(){
    int i,j,a,multi;
    float sum=1.0;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    printf("%.0f + ",sum);
    for(i=1;i<=a;i++){
        multi=1;
        for(j=1;j<=i;j++){
            multi=multi*j;
        }
        sum=sum+(1.0/multi);
        printf("1/%d + ",multi);
    }
    printf("\b\b= %.2f",sum);
}