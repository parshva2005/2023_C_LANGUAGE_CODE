#include<stdio.h>
void main()
{
    int i=0 ,n=0;
    printf("\nEnter the number of elements for the array : ");
    scanf("%d",&n);
    int array[n],temp;
    printf("\nEnter the elements for array..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("array[%d] : ",i);
        scanf("%d",&array[i]);
    }
    
    for(i=0 ; i<n/2 ; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }

    printf("\nThe array after swap is..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\narray[%d] : %d",i,array[i]);
    }
}