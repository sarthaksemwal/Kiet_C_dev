#include<stdio.h>
int main(){

  int r;
  int c;
  int i,j;
  int sum=0;
  printf("Enter the number of rows :");
  scanf("%d",&r);
  printf("Enter the number of coloumn :");
  scanf("%d",&c);
  int arr[r][c];


 printf("Enter the element of the  2d array");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }


  }


   
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sum+=arr[i][j];
    }


  }

  printf("The sum of the 2d array is : %d",sum);








    return 0;
}