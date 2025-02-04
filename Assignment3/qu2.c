#include<stdio.h>

int main(){
    int n,number_of_duplicates=0;
    printf("Enter the length of an array: ");
    scanf("%d",&n);
    int arr[n],distinct_arr[100000];
    printf("Enter the entries of the array one by one :\n");
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int distinct[100];
    int k = 0,l=0;
    for(int i = 0; i<n; i++){
        if(distinct_arr[arr[i]]){
            number_of_duplicates++;
        }
        else {
            distinct[l]=arr[i];
            l++;
        }
        distinct_arr[arr[i]]++;
    }
    printf("The number of duplicates in the array is %d\n",number_of_duplicates);
    while(l--){
        printf("%d ",distinct[l]);
    }
    printf("\n");
    
    return 0;
}