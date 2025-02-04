#include<stdio.h>

//octal equivalent

int main(){
    int i,octal=0,position_determiner=1;
    printf("Enter the number to get its octal equivalent number: ");
    scanf("%d",&i);
    int temp = i;
    do{
        octal += (i%8)*position_determiner;
        position_determiner *= 10;
        i /= 8;
    }while(i);
    printf("The octal value of the decimal number %d is : %d\n",temp,octal);
    return 0;
}