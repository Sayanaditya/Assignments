#include<stdio.h>

//function prototype
void swap(int*,int*);

int main(){
    int a,b;
    printf("Enter the inputs :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("The values of the entered numbers after swap is %d and %d\n",a,b);
    return 0;
}

void swap(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}