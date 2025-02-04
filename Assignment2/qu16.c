#include<stdio.h>

int main(){
    int n,a=0,b=1;
    printf("Enter the number upto which the terms of Fibonacci sequence are to be printed: \n");
    scanf("%d",&n);
    if(n==1){
        printf("0");
    } else if(n>=2){
        printf("0, 1");
        for(int j = 2; j<n ; j++){
            printf(", %d",a+b);
            b = a+b;
            a = b-a;
            
        }
    }
    printf("\n");
    return 0;
}