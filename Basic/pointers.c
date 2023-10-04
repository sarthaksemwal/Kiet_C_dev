
#include <stdio.h>
#include<malloc.h>
//size of tells the size of the data type 
int main() {
   int*a;
   int n,i;
   int sum =0;
   int avg=0;
   printf("size of array:");
   
   scanf("%d",&n);
   a=(int*)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++){
   scanf("%d",&a[i]);
    sum+=a[i];
    printf("%d",sum);
    }
    
      //incomplete
      

    return 0;
}