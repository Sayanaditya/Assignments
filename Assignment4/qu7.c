#include<stdio.h>

char int_to_str(int a){
    int diff = '0';
    return (a+diff);
}

int main(){
    long long n;
    printf("Enter the number: ");
    scanf("%lld",&n);
    char a[100];
    int i=0,temp,diff = '0';
    while(n){
        temp = n%10;
        a[i]=diff + temp;
        n/=10;
        i++;
    }
    a[i]='\0';

    while(i--){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}