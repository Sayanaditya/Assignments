#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    int sum = 0;
    scanf("%d",&n);
    while(n){
        sum += (n%10);
        n /= 10;
    }
    printf("The sum of the digits is %d\n",sum);
    return 0;
}