#include<stdio.h>
int main(){

    int arr[10];
    int i;


    printf("Enter the elemnt inside the array :");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);




    }

    printf("The reverse of the array is:");
    for(i=10-1;i>=0;i--){
        printf("%d",arr[i]);
    }








    return 0;
}