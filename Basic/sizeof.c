
#include <stdio.h>
//size of tells the size of the data type 
int main() {
   printf("char occupies %d byte \n",sizeof(char));
    printf("int occupies %d byte \n",sizeof(int));
     printf("float occupies %d byte \n",sizeof(float));
      printf("double occupies %d byte \n",sizeof(double));
      
      int no[]={1,2,3,4,5,6};
      
      printf("array occupies %d byte \n",sizeof(no));
      
      
      

    return 0;
}