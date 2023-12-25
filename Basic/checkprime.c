#include <stdio.h>
void checkprime(int a);
int main(){
    int a=3;
 checkprime(3);



    return 0;
}
void checkprime(int a){
    int flag=0;
    int i;
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            flag=1;
            break;
        }
     
    }
       if(flag==0){
            printf("prime");
        }
        else{
            printf("notprime");
        }
    

 
}


