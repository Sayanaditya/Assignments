#include<stdio.h>

int main(){
    float f;
    scanf("%f",&f);
    float res = (f-32)*(5.0/9);
    printf("The temp in celcius is %.2f\n",res);
    return 0;
}