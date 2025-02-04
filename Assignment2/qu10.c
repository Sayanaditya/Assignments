#include<stdio.h>

//function
int prime_checker(int a){
    for(int i = 2;i<=(a/2);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("The prime factors of %d are:\n",n);
    for(int j = 2; j<=(n/2);j++){
        if(n%j==0 && prime_checker(j)){
            printf("%d ",j);
        }
    }
    if(prime_checker(n)){
        printf("%d",n);
    }
    printf("\n");
    return 0;
}