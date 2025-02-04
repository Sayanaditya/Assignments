#include<stdio.h>

int main(){
    int temp,sum=0;
    int error = 0;
    printf("Enter the marks of the student in five subjects one by one:\n");
    for(int i = 0; i<5; i++){
        scanf("%d",&temp);
        if(temp>100 || temp<0){
            printf("Enter marks in range 0-100\n");
            error = 1;
            break;
        }
        else{
            sum += temp;
        }
    }
    if(!error){
        float percentage = (float) sum / 5;
        printf("The aggregate marks of the student is %d and his percentage is %.2f\n",sum,percentage);
    }

    return 0;
}