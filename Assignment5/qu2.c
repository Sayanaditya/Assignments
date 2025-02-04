#include <stdio.h>

int main(void) {
    FILE *fp;
    fp = fopen("qu2.c","r");
    if(fp == NULL){
        printf("File can't be opened!\n");
    }
    char str[1000];
    while(!feof(fp)){
        fgets(str,1000,fp);
        printf("%s",str);
    }
    printf("\n");
    return 0;
}