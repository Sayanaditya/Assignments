#include<stdio.h>

void binary(int n){
    if(n==0){
        return;
    }
    int i = n>>1;
    binary(i);
    printf("%d",(n&1));
    
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The binary equivalence of %d is : ",n);
    binary(n);
    printf("\n");
    return 0;
}