#include<stdio.h>
void main(){
    int i,a,facto=1;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        printf("%d*",i);
        facto=facto*i;
    }
    printf("\b=%d",facto);
}