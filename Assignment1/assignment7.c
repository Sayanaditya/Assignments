#include<stdio.h>

int main(){
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float avg = (a+b+c)/3;
    float arr[3] = {a,b,c};
    for(int i = 0; i<3; i++){
        if (arr[i]<avg){
            printf("%.0f is below average\n",arr[i]);
        } else if(arr[i]>avg){
            printf("%.0f is above average\n",arr[i]);
        }
    }
    return 0;
}