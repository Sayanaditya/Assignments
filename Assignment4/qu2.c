#include<stdio.h>

int sum_of_digits(int n,int sum){
    if(n==0){
        return sum;
    }
    sum += (n%10);
    n/=10;
    sum_of_digits(n,sum);
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The value of the sum of the digits is %d\n",sum_of_digits(n,0));
    return 0;
}