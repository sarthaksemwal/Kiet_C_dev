#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int search(int arr[],int val,int size);

int main(){
int i;

int arr[SIZE];
int value,loc;
printf("Enter the value of the array: ");
for(i=0;i<SIZE;i++){
    scanf("%d",&arr[i]);
}

printf("Enter the value you need to search :");
scanf("%d",&value);



loc=search(arr,value,SIZE);

if(loc==-1){
    printf("Element not found");
}
else{
    printf("Element found ar the index %d",loc);
}



    return 0;
}




int search(int arr[],int val,int size){

    int i,index=-1;
    for(i=0;i<size;i++){
        if(arr[i]==val){
            index=i;
            break;
        }
    }

    return index;
}