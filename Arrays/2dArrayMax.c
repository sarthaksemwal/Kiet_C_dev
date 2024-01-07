#include<stdio.h>
int main(){

    int r,c,i,j,max;
    printf("Enter the number of rows in the array:");
    scanf("%d",&r);
     printf("Enter the number of coloumn in the array:");
    scanf("%d",&c);
    int arr[r][c];

    printf("Enter the elment inside the array:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }

    }

    max=arr[0][0];

      for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           if(arr[i][j]>max){
            max=arr[i][j];
           }
        }

    }

    printf("The maximum element inside the array is : %d",max);
    
    






    return 0;
}