#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void sort(int arr[],int size){
    int i,j;
    int temp;
    for(i=0;i<size;i++){
        for(j=i;j<size-i;j++){
            if (arr[j] > arr[j + 1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }

        }
    }
}

int main(){

int arr[SIZE];
int i,flag=0;
printf("Enter the elements of the array :");
for(i=0;i<SIZE;i++){
    scanf("%d",&arr[i]);



}

for(i=0;i<SIZE-1;i++){
    if(arr[i]>arr[i+1]){

        flag=1;
        break;
    }



}

if(flag){

    printf("Not sorted");
    sort(arr,SIZE);
    printf("Array after the sort is :");
    for(i=0;i<SIZE-1;i++){
        printf("%d\n",arr[i]);
    }


}
else{
    printf("Sorted");
}





    return 0;
}



