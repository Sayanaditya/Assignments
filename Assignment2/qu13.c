#include<stdio.h>
#include<math.h>

int binary_to_decimal(int a){
    int power = 0;
    int sum = 0;
    do{
        sum += (a%10)*pow(2,power);
        a/=10;
        power ++;
    }while(a);
    return sum;
}

void decimal_to_bianry(int a){
    int arr[32]={0};
    int idx = 31;
    do{
        arr[idx] = a%2;
        a/=2;
        idx --;
    }while(a);
    for(int j = 0; j<32; j++){
        printf("%d",arr[j]);
    }
    printf("\n");
}




int main(){
    printf("Enter a number(for input format):\n1 --> Binary\n2 --> Decimal\n3 --> Octal\n4 --> Hex\n");
    int input,option,option2,len,temp;
    int output;
    scanf("%d",&option);

    if(option == 1){
        scanf("%d",&temp);
        input = binary_to_decimal(temp);
    }
    if(option == 2){
        scanf("%d",&input);
    } else if(option == 3){
        scanf("%o",&input);
    } else if(option == 4){
        scanf("%x",&input);
    }
    printf("Enter a number(for output format):\n1 --> Binary\n2 --> Decimal\n3 --> Octal\n4 --> Hex\n");
    scanf("%d",&option2);
    if(option2 == 1){
        decimal_to_bianry(input);
    }
    else if(option2 == 2){
        printf("%d\n",input);
    } else if(option2 == 3){
        printf("%o\n",input);
    } else if(option2 == 4){
        printf("%x\n",input);
    }
    return 0;
}