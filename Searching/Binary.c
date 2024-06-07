#include<stdio.h>
#include<stdlib.h>
#define SIZE 10


int search(int arr[],int size,int target);

int main(){
   
   int arr[SIZE];
   int i,value,loc;
   printf("Enter the %d values of the array (Sorted): ",SIZE);
   for(i=0;i<SIZE;i++){
    scanf("%d",&arr[i]);
   }


 printf("Enter the value you want to search :");
 scanf("%d",&value);

loc=(arr,SIZE,value);
if(loc==-1){
    printf("Value not found:");
}

else{
    printf("The value found at the index %d",loc-1);
}



    return 0;

}


int search(int arr[],int size,int target){
    int low=0;
    int high=size-1;
    int mid;

    while(low<=high){
        mid=(low+high)/2;

        if(target>arr[mid])
        low=mid+1;

        else if(target<arr[mid])
        high=mid-1;

        else
        return mid;

    }

    return -1;

}
