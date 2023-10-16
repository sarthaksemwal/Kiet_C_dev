#include <stdio.h>

int main() {
    // Program to calculate the simple interest
    int p, t, r;
    float si;

    printf("Enter the principal value: ");
    scanf("%d", &p);

    printf("Enter the rate: ");
    scanf("%d", &r);

    printf("Enter the time period: ");
    scanf("%d", &t);

    si = (float)(p * r * t) / 100;
    printf("Simple interest: %f", si);

    return 0;
}
