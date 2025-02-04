#include<stdio.h>

int main(){
    int arr[3];
    for(int i = 0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    int maximum = arr[0];
    int minimum = arr[0];
    for(int j = 0;j<3;j++){
        if(arr[j]>maximum){
            maximum = arr[j];
        } else if(arr[j]<minimum){
            minimum = arr[j];
        }
    }
    printf("The maximum of the inputs is %d and the minimum is %d\n",maximum,minimum);
    return 0;
}