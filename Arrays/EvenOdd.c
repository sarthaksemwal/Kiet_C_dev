#include<stdio.h>

int main(){

    int arr[5];
    int i;
    int sume=0,sumo=0;

    printf("Enter the elemnt inside the array :");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);




    }

    for(i=0;i<5;i++){
       if(arr[i]%2==0){

        sume+=arr[i];
       }
       else{
        sumo+=arr[i];
       }




    }

    printf("Sum of even number inside the array is : %d",sume);
    printf("Sum of even number inside the array is : %d",sumo);











    return 0;
}