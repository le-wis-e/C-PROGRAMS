//A program to find the area of a rectangle
#include <stdio.h>
int main() {
    float length,width,area;
    
    printf("Enter the length of the rectangle:");
    scanf("%f", &length);
    
    printf("Enter the width of the rectangle:");
    scanf("%f", &width);
    
    area = length * width;
    
    printf("The area of the rectngle is: %f",area);
    return 0;
    
}