#include<stdio.h>
void main(){
    int n;
    printf("SQU. MATRIX OF :- ");
    scanf("%d",&n);
    int b[n][n],a[n][n],i,j,sum=0;
    printf("MATRIX 1\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("ENTER A MATRIX a[%d][%d] :- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMATRIX 2\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("ENTER A MATRIX b[%d][%d] :- ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           printf("%d\t",a[i][j]+b[i][j]); 
        }
        printf("\n");
    }
}