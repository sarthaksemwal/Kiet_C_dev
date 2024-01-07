#include<stdio.h>
#include<stdlib.h>
int main(){

    int i,j,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];


    printf("Enter the element of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }

       for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){

            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
            
        }
       }

       printf("The array after the sorting is :");
       for(i=0;i<n;i++){
        printf("%d\n",arr[i]);


       }











    return 0;
}