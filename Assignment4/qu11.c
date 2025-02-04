#include<stdio.h>

char *squeeze(char* a,char c,char *temp){
    int i =0,j=0;
    for(i=0;i<100;i++){
        if(a[i]==c) continue;
        else temp[j]=a[i],j++;
    }
    temp[j]='\0';
    return temp;
}

int main(){
    char a[100];
    char c;
    printf("Enter the string: ");
    //scanf("%s",a);
    fgets(a,100,stdin);
    printf("Enter the character to be removed: ");
    // scanf("%c",&c);
    c = getchar();
    char temp[100];
    printf("String after removal is : %s",squeeze(a,c,temp));
    return 0;
}