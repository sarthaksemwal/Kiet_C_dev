#include<stdio.h>
int main(){


    int n,i,max,sndmax,idxmax;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    
    //inserting the element in array
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    
    //traversring to the array 
    printf("The element inside the array are:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            idxmax=i;

            

        }


    }
    printf("The largest element in the array is: %d\n",max);
    // finding the second greatest number in the array 
   //skipping the largest number then we are comparing the rest in the list to find the second greatest int the array 
    sndmax=arr[0];
    for(i=1;i<n;i++){
        if(i==idxmax){
            continue;
        }
        if(arr[i]>sndmax){
            sndmax=arr[i];
        }
        
    }

    printf("The second largest element in the array is: %d\n",sndmax);





    



    return 0;
}