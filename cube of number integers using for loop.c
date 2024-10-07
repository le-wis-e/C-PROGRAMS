//cube of number integers using for loop
#include <stdio.h>
int main() {
    int i,start,stop;

    
    printf("Enter start:");
    scanf("%d", &start);
    
    
    printf("Enter stop:");
    scanf("%d", &stop); 
    
    
    for(i = 1;i <= stop;i++) {
        printf("Number is: %d and the cube of %d is: %d\n", i,i,i*i*i);
    }
    
    return 0;
}