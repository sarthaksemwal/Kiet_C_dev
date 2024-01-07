#include<stdio.h>
int main(){
int n,i,j,max,indexmax,secondmax;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the element in the array:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("The element in the array are:");

for(j=0;j<n;j++){
    printf("%d",arr[j]);
}
max=arr[0];
for(j=0;j<n;j++){
    if(arr[j]>max){
        
        max=arr[j];
        indexmax=j;
    }
}
printf("The max elemnt:%d\n",max);
secondmax=arr[0];

for(j=0;j<n;j++){
   

    if(j==indexmax){
        continue;
    }
    if(arr[j]>secondmax){
            secondmax=arr[j];
    }
    
    printf("%d", secondmax);

}
printf("\nThe second largest element is %d",secondmax);
printf("The reverse of the array is :");
for(i=n-1;i>=0;i--){
    printf("%d",arr[i]);


}









    return 0;
}