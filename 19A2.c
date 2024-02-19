#include<stdio.h>
int array(int,int);
void main(){
    int n,i;
    printf("ENTER A NUMBER :-");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=array(n,i);
    }
    for(i=0;i<n;i++){
        printf("YOUR ELEMET :- %d\n",a[i]);
    }
}
int array(int n,int i){
    int a[i];
    printf("ENTER A ELEMENT :- ");
    scanf("%d",&a[i]);
    return a[i];
}