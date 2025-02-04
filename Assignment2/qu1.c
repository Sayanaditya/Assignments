#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=100 || n<=1){
        printf("No number is divisible between 1-100 by the input number\n");
    }
    else{
        printf("The numbers which are divisible by %d between 1 and 100 are ",n);
        for(int i = n; i<100 ; i+=n){
            printf("%d ",i);
        }
    }
    return 0;
}