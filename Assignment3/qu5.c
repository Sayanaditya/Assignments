#include<stdio.h>

void swap(int i,int a[]){
    int temp = a[i];
    a[i] = a[i+1];
    a[i+1] = temp;
}

int main(){
    printf("Enter 10 integers one by one:\n");
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int k = 1;
    while(k){
        k = 0;
        for(int i=0;i<9;i++){
            if(a[i+1]<a[i]){
                swap(i,a);
                k = 1;
            }
        }
    }
    for(int  i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}