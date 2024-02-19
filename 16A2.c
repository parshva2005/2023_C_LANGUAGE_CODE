#include<stdio.h>
void main(){
    int arr[3][3],i,j,pos=0,neg=0,zer=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER A NUMBER IN arr[%d][%d] :- ",i,j);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>0){
                pos++;
            }
            else if(arr[i][j]==0){
                zer++;
            }
            else{
                neg++;
            }
        }
    }
    printf("POSITIVE ELEMENTS ARE %d\n",pos);
    printf("NEGATIVE ELEMENTS ARE %d\n",neg);
    printf("ZERO ELEMENTS ARE %d",zer);
}