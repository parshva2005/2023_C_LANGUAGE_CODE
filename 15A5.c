#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    printf("ENTER A STRING :- ");
    gets(a);
    printf("STRING :- %s",a);
    printf("\nLENGTH :- %d",strlen(a));
}