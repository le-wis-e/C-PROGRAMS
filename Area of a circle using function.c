//Area of a circle 
#include <stdio.h>
float area(float a, float b, float c);
int main() {
    float y;
    y = area(3.142,7,7);//function calling
 
        printf("The area is %f", y);
    
    return 0;
}
//function definatio
float area(float a, float b, float c){
int d;
d = a*b*c;

return d;
}