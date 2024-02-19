#include<stdio.h>
void main(){
    int i,j,k=1;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=i;j<=4;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j%2==1){
                if(i%2==0){
                    printf("%c",ch++);
                }
                else{
                    printf("%d",k++);
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}