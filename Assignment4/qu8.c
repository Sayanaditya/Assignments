#include<stdio.h>

int main(){
    char a[100];
    int len=0,i;
    scanf("%s",a);
    for(i=0;i<100;i++){
        if(a[i]=='\0') break;
        else len++;
    }
    len--;
    i=0;
    int palindrome=1;
    while(len>i){
        if(a[len]!=a[i]) {
            palindrome=0;
            break;
        }
        len--;
        i++;
    }
    if(palindrome) printf("It is a palindroome\n");
    else printf("It is not a palindrome\n");
    return 0;
}