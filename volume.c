//A program to find the volume of a cylinder
#include <stdio.h>
#include <math.h>
int main() { //printf(),scanf() // dec and initialization
    float PI,r,h,volume;
    
    
    printf("Enter PI:");
    scanf("%f",&PI);
    
    printf("Enter r:");
    scanf("%f",&r);
    
    printf("Enter h:");
    scanf("%f",&h);
    
    
    volume = PI * r * r * h;
    
    
    printf("volume %.2f",volume);
    

    
    
    
    return 0;
    
}
