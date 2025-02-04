#include<stdio.h>

int str_to_int(char a){
    int ans;
    ans = a - '0';
    return ans;
}

int main(){
    printf("Enter the string: ");
    char a[100];
    scanf("%s",a);
    long long ans=0;
    for(int i=0;i<100;i++){
        if(a[i]=='\0'){
            break;
        }
        ans = 10*ans+str_to_int(a[i]);
    }
    printf("%lld\n",ans);
    return 0;
}