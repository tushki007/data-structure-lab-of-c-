#include<stdio.h>
void insert(int arr[], int n)
{
    int i,val,pos;
    printf("you have chosen to insert from 1d array.:\n");
    printf("enter the position for insertion:");
    scanf("%d &pos");
    printf("enter value to be inserted");
    scanf("%d",&val);
    
    for (i = n; i > pos; i--)
       arr[i] = arr[i - 1];

   arr[pos] = val;

   n++;
   for(i = 0 ; i < n ; i++)
       printf("%d",arr[i]);
}
