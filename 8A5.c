#include<stdio.h>
void main(){
    int a,i=1,odd=0,even=0;
    while(i<=10){
        printf("ENTER A NUMBER %d :- ",i);
        scanf("%d",&a);
        if(a%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
        i++;
    }
    printf("ODD NUMBER %d\n",odd);
    printf("EVEN NUMBER %d",even);
}