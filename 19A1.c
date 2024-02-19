#include<stdio.h>
int fact(int a);
void main(){
    int a;
    printf("ENTER YOUR NUMBER :- ");
    scanf("%d",&a);
    int factorial=fact(a);
    printf("%d! = %d",a,factorial);
}
int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
