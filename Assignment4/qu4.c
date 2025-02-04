#include<stdio.h>

int compare_vow(char a){
    int ans=0;
    char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<10;i++){
        if(a==vowels[i]){
            ans = 1;
            break;
        }
    }
    return ans;
}

int main(){

    //stores one line 

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
    int ans=0;
    for(int i=0;i<100;i++){
        if(a[i]=='\0'){
            break;
        } else {
            if(compare_vow(a[i]) && compare_vow(a[i+1])){
                ans ++;
            }
        }
    }
    printf("The number of successive vowels = %d\n",ans);

    return 0;
}