#include <stdio.h>


void insert(int arr[], int *n, int item, int position) {

    if (position >= 0 && position <= *n) {
    
        for (int i = *n; i > position; i--) {
            arr[i] = arr[i - 1];
        }


        arr[position] = item;
        (*n)++;
    } else {
        printf("Invalid position!\n");
    }
}



void main(){
    int arr[]={10,20,30,40,50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    } 
    int item, position,n;
    n=5;
    printf("Enter the element you want to add: ");
    scanf("%d",&item);
    printf("Enter the position where you want to add the element: ");
    scanf("%d",&position);
    insert(arr,&n,item,position);
}



