#include<stdio.h>
void main(){
    int i,j,a,sum=0;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("(");
        for(j=1;j<=i;j++){
            printf("%d+",j);
            sum=sum+j;
        }
        printf("\b)+");
    }
    printf("\b=%d",sum);
}