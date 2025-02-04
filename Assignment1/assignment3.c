#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int sum = 0;
    for(int i = 0; i<3; i++){
        sum += (a%10);
        a /= 10;
    };
    printf("Sum of the digits are %d\n",sum);
    return 0;
}