#include<stdio.h>

int main(){
    int iteration,count = 0,num = 1,temp,temp_sum;
    printf("First 10 happy numbers are : ");
    while(count<10){
        iteration = 0;
        temp = num;
        temp_sum = 0;
        while(iteration<100){
            while(temp){
                temp_sum += (temp%10)*(temp%10);
                temp /= 10;
            }
            if(temp_sum == 1){
                printf("%d ",num);
                count++;
                break;
            }
            temp = temp_sum;
            temp_sum = 0;
            iteration ++;
        }
        num++;
    }
    printf("\n");
    return 0;
}