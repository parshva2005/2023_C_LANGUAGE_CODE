#include<stdio.h>
void main(){
    int r,c;
    printf("ENTER A NUMBER OF ROW :- ");
    scanf("%d",&r);
    printf("ENTER A NUMBER OF COLUMN :- ");
    scanf("%d",&c);
    int arr[r][c],i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("ENTER A NUMBER IN arr[%d][%d] :- ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}