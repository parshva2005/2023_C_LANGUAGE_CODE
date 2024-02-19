#include<stdio.h>
void main(){
    char a[100],b,c;
    int i;
    printf("ENTER A STRING :- ");
    gets(a);
    printf("ENTER WHICH CHARACTER YOU WANT TO REPLACE :- ");
    scanf("%c",&b);
    printf("WITH WHICH CHARACTER YOU WANT TO REPLACE :- ");
    scanf(" %c", &c);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b){
            a[i]=c;
        }
    }
    printf("YOUR MODIFIED STRING IS :- %s",a);
}