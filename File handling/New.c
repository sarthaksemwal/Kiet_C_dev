// File Handling
#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    int n, sq, cu;
    ptr1 = fopen("abc", "w+");
    printf("Enter the positive numbers ");
    while (1)
    {
        scanf("%d", &n);
        if (n < 1)
            break;
        else
            putw(n, ptr1);
    }
    rewind(ptr1);
    ptr2 = fopen("sqcu", "w+");
    while (1)
    {
        n = getw(ptr1);
        if (n == EOF)
            break;
        sq = n * n;
        putw(sq, ptr2);
    }
    rewind(ptr1);
    while (1)
    {
        n = getw(ptr1);
        if (n == EOF)
            break;
        cu = n * n * n;
        putw(cu, ptr2);
    }

    rewind(ptr2);
    while (1)
    {
        n = getw(ptr2);
        if (n == EOF)
            break;
        printf("%d ", n);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}