
#include <stdio.h>

int main() {
    //here in second line 072 octal is converted to decimal , thrid the hexadecimal is converted in the  decimal
 printf("%d%d%d%d",72,072,0x72,0X72);


 //here %o is used for the octaldecimal and the %x is used for the hexadecimal
 //octal for the r
printf("%d%o%x",72,72,72);
 

 //first one state that we will have the 5 digit space so we have the 3 zero before the  first 32 , in second we have a space in front of the 32 , in the third we have specifiication in  - so we dont have any space because the minus value does not count so now we know that the 
 printf("%05d,%5d,%-5d",32,32,32);


// incomplete

printf("%6.3f,%06.3f,%09.3f,%-09.3f,%6.0f,%6.0f",45.6,45.6,45.6,45.6,45.6,45.6);

    return 0;
}