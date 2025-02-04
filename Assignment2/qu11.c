#include<stdio.h>

int main(){
    printf("All the combinations of 1,2 and 3 are :\n");
    for(int i = 1; i <=3;i++){
        for(int j = 1;j<=3;j++){
            for(int k =1; k<=3;k++){
                if(i!=j && j!=k && k!=i){
                    printf("%d\n",100*i + 10*j + k);
                }
            }
        }
    }

    return 0;
}