//A program to find the surface area of a cylinder
#include <stdio.h>
#include <math.h>
int main() { //printf(),scanf() // dec and initialization
    float PI,r,h,surface_area;
    
    
    printf("Enter PI:");
    scanf("%f",&PI);
    
    printf("Enter r:");
    scanf("%f",&r);
    
    printf("Enter h:");
    scanf("%f",&h);
    
    
    surface_area = (2 * PI * r * r * h) + (2 * PI * r * h);
    
    printf("surface_area %.2f",surface_area);
    

    
    
    
    return 0;
    
}
