#include<stdio.h>

int main(){
    int total_marks[5];
    int temp,sum1=0;
    for(int i=0;i<5;i++){
        sum1=0;
        printf("Enter marks of student %d:\n",i+1);
        for(int j=0;j<5;j++){
            printf("Enter marks of subject %d: ",j+1);
            scanf("%d",&temp);
            sum1 += temp;
        }
        total_marks[i] = sum1;
        printf("Total marks obtained by the student is : %d\n\n",sum1);
        
    }
    int maximum=0;
    for (int i=0;i<5;i++){
        if(total_marks[i]>maximum){
            maximum = total_marks[i];
        }
    }
    printf("The highest marks is %d\n",maximum);
    return 0;
}