#include<stdio.h>

int main(){
    printf("Enter the number of elements in the list: ");
    int n,maximum,minimum,temp;
    scanf("%d",&n);
    printf("Enter the numbers one by one:\n");
    scanf("%d",&temp);
    maximum = temp;
    minimum = temp;
    for(int i = 1; i<n; i++){
        scanf("%d",&temp);
        if(temp>maximum){
            maximum = temp;
        } else if(minimum>temp){
            minimum = temp;
        }
    }
    printf("The range of the inputs is %d\n",maximum - minimum);
    return 0;
}