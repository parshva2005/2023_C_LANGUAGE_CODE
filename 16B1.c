#include<stdio.h>
void main(){
    int n;
    printf("SQU. MATRIX OF :- ");
    scanf("%d",&n);
    int a[n][n],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("ENTER A NUMBER a[%d][%d] :- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    } 
}