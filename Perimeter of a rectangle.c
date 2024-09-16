//A program to find the perimeter of a rectangle
#include <stdio.h>
int main() { 
    float length,width,sum;
    printf("Enter the length of the rectangle:");
    scanf("%f",&length);
    
    printf("Enter the width of the rectangle:");
    scanf("%f",&width);
    sum = length + width + length + width;
    printf("The sum of the rectangle is %f",sum);
    return 0;
}