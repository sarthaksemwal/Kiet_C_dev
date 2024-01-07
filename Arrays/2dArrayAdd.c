#include<stdio.h>
int main(){


int r;
  int c;
  int i,j;
  printf("Enter the number of rows :");
  scanf("%d",&r);
  printf("Enter the number of coloumn :");
  scanf("%d",&c);
  int arr[r][c];
  int arr2[r][c];
  int arr3[r][c];


 printf("Enter the element of the first 2d array");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }


  }
  

   printf("Enter the element of the second 2d array");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&arr2[i][j]);
    }


  }


  //addition of the 2d array 


   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        arr3[i][j]=arr[i][j]+arr2[i][j];
    }


  }


  printf("The element of the 2d  array after addition are are:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",arr3[i][j]);
    }
    printf("\n");


  }






    return 0;
}