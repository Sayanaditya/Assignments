#include<stdio.h>

int main(){
    char a[1000];
    char temp;
    int i=0;
    do{
        temp = getchar();
        a[i]=temp;
        i++;
    }while(temp!='\n');
    i=0;
    int count=0;
    while(a[i]!='\0'){
        if(a[i]==' ') count ++;
        i++;
    }
    count ++;
    if(a[0]!='\n') printf("The number of words in the string is %d\n",count);
    else printf("The number of words in the string is %d\n",0);
    return 0;
}