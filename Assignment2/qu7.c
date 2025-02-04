#include<stdio.h>


// series : 1! + 2! + 3! + 4! + 5! + .....
int factorial(int n){
    int factorial = 1;
    for(int i = 1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int sum = 0,n;
    scanf("%d",&n);
    for(int j = 1; j<=n ; j++){
        sum += factorial(j);
    }
    printf("The required sum is %d",sum);
    return 0;
}