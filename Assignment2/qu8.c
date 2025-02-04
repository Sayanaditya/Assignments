
#include<stdio.h>

//function prototype and definition
int sum_of_divisors(int a){
    int sum = 0;
    for(int k = 1; k<= (a/2); k++){
        if(a%k==0){
            sum += k;
        }
    }
    sum += a;
    return sum;
}

int main(){
    int result = 0,input;
    scanf("%d",&input);
    for(int j = 1; j<=input; j++){
        result += sum_of_divisors(j);
    }
    printf("The required result of the summation is %d\n",result);
    return 0;
}