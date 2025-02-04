#include<stdio.h>

int main(){
    printf("Enter 100 numbers one by one:\n");
    int positive=0,negative=0,zero=0,temp;
    for(int i =0 ; i< 10; i++){
        scanf("%d",&temp);
        if(temp>0){
            positive ++;
        } else if(temp<0){
            negative ++;
        } else{
            zero ++;
        }
    }
    printf("There are %d positive numbers , %d negative numbers and %d numbers of zeroes\n",positive,negative,zero);

    return 0;
}