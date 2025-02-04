#include<stdio.h>

int main(){
    int n,sum = 0;
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++){
        sum += i*(i+1);
    }
    printf("The required sum is %d\n",sum);
    return 0;
}