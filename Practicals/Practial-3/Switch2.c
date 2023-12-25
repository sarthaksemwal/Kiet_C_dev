#include<stdio.h>
int main(){



    int n;
    printf("Enter the color code:");
    scanf("%d",&n);
    switch(n){
    case 1:
    printf("Red");
    break;
      case 2:
    printf("Green");
    break;
      case 3:
    printf("White");
    break;
      case 4:
    printf("Yellow");
    break;
      case 5:
    printf("Orange");
    break;
    default:
    printf("Wrong code!");
    }
    return 0;
}