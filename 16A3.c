#include<stdio.h>
void main(){
    int std[20][3],i,j,k;
    for(i=0;i<20;i++){
        printf("ENTER A ROLL NUMBER :- ");
        scanf("%d",&std[i][0]);
    }
    for(i=0;i<20;i++){
        k=0;
        for(j=1;j<3;j++){
            printf("ENTER A MARKS %d OUTOFF 100 :- ",k++);
            scanf("%d",&std[i][j]);
        }
    }
    for(i=0;i<20;i++){
        printf("ROLL NO:-");
        for(j=0;j<3;j++){
            printf("%d\t",std[i][j]);
        }
        printf("\n");
    }
}