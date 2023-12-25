#include<stdio.h>
int main(){
  char a;
  int balance;
  printf("Enter the balance:");
  scanf("%d",&balance);
  printf("Enter the gender m for male and f for female:");
  scanf(" %c",&a);
  if(a=='f' && balance>5000){
    balance=balance*0.5;
    printf("Your new balance n=%d",balance);
  }
else{
    balance=balance*0.2;
    printf("Your new balance: %d",balance);
}
  
    return 0;
}