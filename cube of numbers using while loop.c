//cube of number integers using while loop
#include <stdio.h>
int main() {
    int i,start,stop;

    
    printf("Enter start:");
    scanf("%d", &start);
    
    printf("Enter stop:");
    scanf("%d", &stop); 
    
    i = 0;
    while (i <= stop) {
        printf("Number is %d and the cube of the %d is %d\n",i,i,i*i*i);i++;
    }
    
    return 0;
}