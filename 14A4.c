#include<stdio.h>
void main(){
    int n;
    printf("ENTER HOW MANY NUMBERS YOU GIVE :- ");
    scanf("%d",&n);
    int a[n],sum=0,max,min,avg,i;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
        if(i==0){
            max=a[i];
            min=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("MINIMUM VALUE :- %d",min);
    printf("\nMAXIMUM VALUE :- %d",max);
    printf("\nSUM :- %d",sum);
    printf("\nAVG :- %d",avg);
}
