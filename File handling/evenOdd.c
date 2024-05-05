#include <stdio.h>

int main() {
    FILE *filePointer1, *filePointerEven, *filePointerOdd;

  
    filePointer1 = fopen("Test.c", "w");

    

    
    fprintf(filePointer1, "10 5 7 12 3 8 15 6 9");


    fclose(filePointer1);

    
    filePointer1 = fopen("Test.c", "r");


    
    filePointerEven = fopen("EvenNumbers.txt", "w");

  

   
    filePointerOdd = fopen("OddNumbers.txt", "w");

   

    int number;

    
    while (fscanf(filePointer1, "%d", &number) !=EOF) {
        if (number % 2 == 0) {
        
            fprintf(filePointerEven, "%d\n", number);
        } else {
            fprintf(filePointerOdd, "%d\n", number);
        }
    }

    
    fclose(filePointer1);
    fclose(filePointerEven);
    fclose(filePointerOdd);

    printf("Even and odd numbers separated and written to files.\n");

    return 0;
}
