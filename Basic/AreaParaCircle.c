#include<stdio.h>
void main(){
    float radius , area, para;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    para=2*3.14*radius;
    printf("Area of the circle is:%f",area);
    printf("\nParameter of the cirlce:%f",para);
}