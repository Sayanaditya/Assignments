#include<stdio.h>

int main(){
    int length,breadth,radius;
    printf("Enter the values of the height and width of the rectangle: \n");
    scanf("%d",&length);
    scanf("%d",&breadth);
    printf("The area of the rectangle is %d\n",length*breadth);
    printf("Enter the value of the radius of the circle: \n");
    scanf("%d",&radius);
    printf("The circumference of the circle is %.2f\n",3.14*radius*2);
    printf("Area of the circle is %f\n",3.14*radius*radius);
    return 0;
}