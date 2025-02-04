#include<stdio.h>

int main(){
    int salary;
    printf("Enter the basic salary\n");
    scanf("%d",&salary);
    float gross = salary*1.75;
    printf("The gross salary of the Employee is %.2f",gross);
    return 0;
}