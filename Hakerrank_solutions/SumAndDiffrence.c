#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // int variables declared
	int a,b;
    //input
    scanf("%d %d",&a,&b);
    //output
    printf("%d %d\n",a+b,a-b);
    //float variable declared
    float c,d;
    //input
    scanf("%f %f",&c,&d);
    //output
    printf("%.1f %.1f\n",c+d,c-d);
    
    return 0;
}
