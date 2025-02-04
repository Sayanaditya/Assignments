#include<stdio.h>
#include<math.h>

int main(){
    int base,num;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the number: ");
    scanf("%d",&num);
    float answer = log(num)/log(base);
    printf("The value of log of %d with base %d is %f\n",num,base,answer);
    return 0;
}