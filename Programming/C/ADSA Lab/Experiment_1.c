#include <stdio.h>
void display(int arr[],int size){
printf("Array elements: ");
for(int i=0;i<size;i++){
printf("%d \t",arr[i]);
}
printf("\n");
}
int insertion(int arr[],int size,int element,int position){
if(position<0 || position>size){
printf("INVALID POSITION FOR INSERTION \n");
return size;
}
for (int i=size-1;i>=position;i--){
arr[i+1]=arr[i];
}
arr[position]=element;
return size+1;
}
int deletion(int arr[],int size,int position){
if(position<0 || position>=size){
printf("INVALID POSITION FOR DELETION \n");
return size;
}
for(int i=position;i<size-1;i++){
arr[i]=arr[i+1];
}
return size-1;
}
int search(int arr[],int size,int element){
for(int i=0;i<size;i++){
if(arr[i]==element){
return i;
}
}
return -1;
}
void update(int arr[],int size,int position,int newValue){
if(position>=0 && position<size){
arr[position]=newValue;
}
else{
printf("INVALID POSITION FOR UPDATING \n");
}
}
int main(){
int arr[100];int size=0;
size=insertion(arr,size,100,0);
size=insertion(arr,size,200,1);
size=insertion(arr,size,300,2);
printf("After Insertion:\n");
display(arr,size);
size=deletion(arr,size,1);
printf("After Deletion: \n");
display(arr,size);
int searchIndex=search(arr,size,300);
if(searchIndex!=-1){
printf("Element 300 found at index %d\n",searchIndex);
}
else{
printf("Element 300 not found\n");
}
update(arr,size,1,400);
printf("After Updating: \n");
display(arr,size);
return 0;
}