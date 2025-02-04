#include<stdio.h>

int main(){
    int n,rev = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n){
        rev *= 10;
        rev += (n%10);
        n /= 10;
    }
    printf("The reverse of the number is %d\n",rev);
    return 0;
}