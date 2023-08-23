#include <stdio.h>

int main() {
    //declaring the variable a,b,sum where sum stores the value of a+b
    int a, b, sum;
    a = 10;
    b = 20;
    sum = a + b;
    //printing the output
    printf("sum is: %d\n", sum);
    //added a return zero because we have used int main and  its expected to return an integer value as an exit status to the operating system 
    return 0;
}
