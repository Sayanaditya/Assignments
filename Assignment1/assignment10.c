#include<stdio.h>

int main(){
    int amount,count = 0;
    printf("Enter the amount :\n");
    scanf("%d",&amount);
    if(amount%10 != 0)
        printf("The selected amount can't be provided.\n");
    //selecting number of 100 notes
    else {
    count+= (amount/100);
    amount = amount%100;
    //selecting number of 50 notes
    count+= (amount/50);
    amount = amount%50;
    //selecting number of 10 notes
    count+= (amount/10);
    amount = amount%10;

    printf("The cashier will give %d number of notes.\n",count);
    }
    return 0;
}