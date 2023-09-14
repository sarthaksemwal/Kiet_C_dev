#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,digit,sum;
    scanf("%d", &n);
    
    while (n>0){
        int digit=n%10;
        sum+=digit;
        n/=10;
        
    }
    printf("%d",sum);
    
    return 0;
}