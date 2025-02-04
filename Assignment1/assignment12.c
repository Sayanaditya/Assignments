#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter the length and breadth of the rectangle one by one\n");
    double length,breadth;
    printf("Length: ");
    scanf("%lf",&length);
    printf("Breadth: ");
    scanf("%lf",&breadth);
    //if area are equal
    double radius1 = sqrt(length*breadth/3.14);
    printf("For areas being equal radius of the circle is %lf\nAnd the ratio of perimeters of rectangle and circle is %lf",radius1,(length+breadth)/(3.14*radius1));
    //for perimeters being equal
    double radius2 = (length+breadth)/3.14;
    printf("For perimeters being equal radius of the circle is %lf\nAnd the ratio of areas of rectangle and circle is %lf",radius2,(length*breadth)/(3.14*radius2*radius2));
    return 0;
}