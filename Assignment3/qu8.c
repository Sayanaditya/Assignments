#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int a[n];
    int sum =0;
    printf("Enter the numbers : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    double avg = (double)sum/n;
    double sqr_sum=0;
    for(int i=0;i<n;i++){
        sqr_sum += (a[i]-avg)*(a[i]-avg);

    }
    double variance = sqr_sum/n;
    double ans = sqrt(variance);
    printf("The standart deviation is %lf\n",ans);
    return 0;
}