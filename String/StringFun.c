// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int len(char str1[]);
int isPal(char str2[]);
void cat(char str1[],char str2[]);
void rev(char str1[]);

int compare(char str1[],char str2[]);
void copy(char str1[],char str2[]);
int main() {
    
        while (1) {
        int choice;
        char str1[50];
        char str2[50];

        printf("\nChoose a number for your string program:\n");
        printf(" 1-length\n 2-palindrome\n 3-concatenation\n 4-reverse\n 5-compare\n 6-copy\n 0-exit\n");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter the string: ");
                scanf(" %[^\n]%*c", str1);
                printf("Length of the string is: %d\n", len(str1));
                break;

            case 2:
                printf("Enter the valid string: ");
                scanf(" %[^\n]%*c", str1);
                if (isPal(str1)) {
                    printf("The string is palindrome\n");
                } else {
                    printf("The string is not palindrome\n");
                }
                break;

            case 3:
                printf("Enter the first string: ");
                scanf(" %[^\n]%*c", str1);
                printf("Enter the second string: ");
                scanf(" %[^\n]%*c", str2);
                cat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter the string to reverse: ");
                scanf(" %[^\n]%*c", str1);
                rev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 5:
                printf("Enter the first string: ");
                scanf(" %[^\n]%*c", str1);
                printf("Enter the second string: ");
                scanf(" %[^\n]%*c", str2);
                if (compare(str1, str2)) {
                    printf("The strings are equal\n");
                } else {
                    printf("The strings are not equal\n");
                }
                break;

            case 6:
                printf("Enter the source string: ");
                scanf(" %[^\n]%*c", str1);
                copy(str1, str2);
                printf("Copied string: %s\n", str2);
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}


  //function to calculate length 
int len(char str1[]){
    int i;
    for(i=0;str1[i]!='\0';i++);
    return i;
}


//function to check palindrome 
int isPal(char str2[]){
    int i=0;
    int l;
    int flag=0;
    l=len(str2);
    
    while(i<l/2){
        if(str2[i]==str2[l-1]){
            flag=1;
            i++;
            l--;
        }
        else{
            flag=0;
            break;
        }
        
        
    }
    
    return flag;
}


//function to concat two strings
void cat(char str1[],char str2[]){
    
    int i=0;
    int l;
    l=len(str1);
    while(str2[i]!='\0'){
        str1[l]=str2[i];
        i++;
        l++;
    }
    str1[l]='\0';
    }
    
    //function to reverse the string 
    
    void rev(char str1[]){
        int i=0;
        int l,j;
        char temp;
        l=len(str1);
        j=l-1;
        while(i<l/2){
           
            temp=str1[i];
            str1[i]=str1[j];
            str1[j]=temp;
            i++;
            j--;
            
        }
        
    }


//function to compare two strings
  int compare(char str1[],char str2[]){
   int flag=0;
   int i=0;
   int l1,l2;
   l1=len(str1);
   l2=len(str2);

   if(l1==l2){
   while(str1[i] && str2[i]){
     
    if(str1[i]==str2[i]){
        flag=1;
    }
    
    else{
        flag=0;
        break;
    }
    
    i++;

   }

   }

   return flag;
  }



//function to copy one string to another
void copy(char str1[],char str2[]){

    int i=0;
    while(str1[i]!='\0'){

        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';




}