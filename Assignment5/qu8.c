#include <stdio.h>

void printStudentDetails(unsigned char value);

int main(void)
{
    unsigned char studentInfo;
    printf("Enter an 8-bit unsigned character value: ");
    scanf("%hhu", &studentInfo);
    printStudentDetails(studentInfo);
    return 0;
}

void printStudentDetails(unsigned char value)
{
    unsigned char gender = (value & 0x80) >> 7;
    unsigned char yearOfStudy = (value & 0x60) >> 5;
    unsigned char age = value & 0x1F;
    printf("Gender: %s\n", (gender == 1) ? "Male" : "Female");
    printf("Year of Study: %d\n", yearOfStudy);
    printf("Age: %d\n", age);
}