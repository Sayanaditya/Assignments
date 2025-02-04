#include<stdio.h>

int main(){
    int n;
    printf("Enrter the number of entries in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the entries one by one\n");
    for(int j = 0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    int rev_arr[n];
    for(int k = n-1; k>=0 ; k--){
        rev_arr[k]=arr[n-1-k];
    }
    printf("The reversed array of the input array is :\n");
    for(int i = 0; i<n ; i++){
        printf("%d ",rev_arr[i]);
    }
    printf("\n");
    return 0;
}