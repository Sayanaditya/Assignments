#include<stdio.h>

int digit_cubic_sum(int a){
    int sum = 0;
    while(a){
        sum += (a%10)*(a%10)*(a%10);
        a /= 10;
    }
    return sum;
}

int main(){
    printf("Armstrong numbers between 1 and 500 are : ");
    printf("1");
    for(int i = 2; i<500; i++){
        if(i == digit_cubic_sum(i)){
            printf(", %d",i);
        }
    }
    printf("\n");
    return 0;
}