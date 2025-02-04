#include<stdio.h>

char capitalize(char a){
    int diff = 'A'-'a';
    char output = (a<='z'&& a>='a'?(a + diff):a);
    return output;
}

int main(){
    char a[100];
    char temp;
    printf("Enter the line: ");
    for(int i=0;i<100;i++){
        temp = getchar();
        if(temp=='\n'){
            a[i]='\0';
            break;
        } else {
            a[i] = temp;
        }
    }
    for(int i=0;i<100;i++){
        if(a[i]=='\0'){
            break;
        } else {
            printf("%c",capitalize(a[i]));
        }
    }
    printf("\n");
    

    return 0;
}