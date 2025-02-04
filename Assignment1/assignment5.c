#include<stdio.h>

int main(){
    int a,b,maximum,minimum;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        maximum = a;
        minimum = b;
    } else {
        maximum= b;
        minimum = a;
    }
    int k = maximum%minimum;
    float up = maximum;
    float down = minimum;
    float n = up/down;
    printf("%d/%d   %.2f\n",k,minimum,n);
    return 0;
}