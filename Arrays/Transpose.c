#include<stdio.h>
int main(){

    int r,c;
    int i,j;

    printf("Enter the rows:");
    scanf("%d",&r);
    printf("Enter the coloumn:");
    scanf("%d",&c);
    int arr[r][c];

    printf("Enter the elements of the array:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The array you entered is:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

      printf("Transpose of the array is :");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }

}