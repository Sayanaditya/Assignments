#include<stdio.h>

int main(){
    int i = 0;
    printf("The ASCII values and the respective characters are printed below(ASCII value --> character)\n");

    while(i<=255){
        printf("%d --> %c\n",i,i);
        i++;
    }
    return 0;
}