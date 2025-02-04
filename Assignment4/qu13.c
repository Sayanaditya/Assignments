#include<stdio.h>

void convert(int n,char s[], int w){
    int count=0;
    char a[100];
    int i=0,temp,diff = '0';
    while(n){
        temp = n%10;
        a[i]=diff + temp;
        n/=10;
        i++;
        count++;
    }
    a[i]='\0';
    i=0;
    if(count<w){
        s[i]=' ';
        w--;
        i++;
    }
    temp = count;
    int j=0;
    while(temp--){
        s[i]=a[j];
        j++;i++;
        count ++;
    }
    for(int k=0;k<count;k++){
        printf("%c",a[k]);
    }
    printf("\n");
}

int main(){
    char s[100];
    int n=1234;
    int w=3;
    convert(n,s,w);
    return 0;
}