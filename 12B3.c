#include<stdio.h>
void main(){
    int i,j,a=5,pas,k;
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        pas=1;
        for(k=1;k<=i;k++){
            printf("%2d",pas);
            pas=pas*(i-k)/k;
        }
        printf("\n");
    }
}