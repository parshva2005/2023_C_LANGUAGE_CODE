#include<stdio.h>
void main(){
    int a,b,c;
    printf("ENTER TRIANGLE SIDE 1 :- ");
    scanf("%d",&a);
    printf("ENTER TRIANGLE SIDE 2 :- ");
    scanf("%d",&b);
    printf("ENTER TRIANGLE SIDE 3 :- ");
    scanf("%d",&c);
    if(a==b && b==c){
        printf("EQUILATERAL TRIANGLE");
    }
    else if(a==b || b==c || a==c){
        printf("ISOSCELES TRIANGLE");
    }
    else if(c*c == a*a + b*b || b*b == a*a + c*c || a*a == b*b + c*c){
        printf("RIGHT ANGLED TRIANGLE");
    }
    else{
        printf("SCALENE TRIANGLE");
    }
}