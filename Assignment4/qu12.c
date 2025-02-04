#include<stdio.h>
#include<string.h>

int strend(char * s,char * t){
    int len1=0,len2=0;
    len1 = strlen(s);
    len2 = strlen(t);
    int i=len2,j=len1;
    while(i){
        if(s[j]!=t[i]) return 0;
        i--;
        j--;
    }
    return 1;
}

int main(){
    char s[100],t[100];
    printf("Enter the string : ");
    fgets(s,100,stdin);
    printf("Enter the string to find : ");
    fgets(t,100,stdin);
    printf("%d\n",strend(s,t));
    return 0;
}