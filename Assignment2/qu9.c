
#include<stdio.h>

//prime number checker:
int prime_checker(int a){
    for(int i = 2;i<=(a/2);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    printf("The prime numbers between 1 and 100 are:\n");
    for(int j = 2; j<=100;j++){
        if(prime_checker(j)){
            printf("%d ",j);
        }
    }
    return 0;
}