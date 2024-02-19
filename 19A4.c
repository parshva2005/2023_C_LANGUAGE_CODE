#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b;
    printf("ENTER YOUR STRING :- ");
    gets(a);
    printf("ENTER YOUR CHARACTER :- ");
    scanf("%c",&b);
    printf("YOUR CHARACTER IN STRING :- %s",strchr(a,b));
}