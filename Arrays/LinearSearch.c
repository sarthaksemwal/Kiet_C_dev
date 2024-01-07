#include<stdio.h>


int main(){


    int element;
    int i,index;
    int flag=0;

    int arr[5];

    printf("Enter the elemnt inside the array :");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
}




     printf("Enter the element you want to search");
     scanf("%d",&element);
     for(i=0;i<5;i++){
        if(arr[i]==element){
            flag=1;
            index=i;
            break;
        }





    }

    if(flag==1){
        printf("Element found at the index %d",index);
    }
    else{
        printf("Element not found");
    }


    













    return 0;
}