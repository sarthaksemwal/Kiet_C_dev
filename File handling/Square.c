#include<stdio.h>
int main(){
    //creating the file pointer 
    FILE *ptr1,*ptr2;
    int number;
   
   //opening the file and taking value from the user
    ptr1=fopen("New.txt","w");
    printf("Enter numbers:\n");
    while(1){
        scanf("%d",&number);
        if(number==0){
            break;
        }
        
        fprintf(ptr1,"%d\n",number);

    }
    fclose(ptr1);
    
    //opening the file 1 in read mode to read the value and writing the value in the second file 
    ptr1=fopen("New.txt","r");
    ptr2=fopen("SquareCube.txt","w");

    //reading the value from the file 1 and storing the square amd cube in the secnd file 
    while(fscanf(ptr1,"%d",&number)!=EOF){
    fprintf(ptr2,"%d,%d\n",number*number,number*number*number);
    }

    //closing the file pointers 
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}