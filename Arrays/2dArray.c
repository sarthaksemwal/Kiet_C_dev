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


 printf("Enter the element of the 2d array");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }


  }

  printf("The element of the 2d array are:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");


  }





    return 0;
}