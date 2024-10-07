//cube of number integers using for while loop 
#include <stdio.h>
int main() {
    int i,start,stop;

    
    printf("Enter start:");
    scanf("%d", &start);
    
    
    printf("Enter stop:");
    scanf("%d", &stop); 
    
    
    i = 1;
    do{
        printf("Number is: %d and the cube of %d is: %d\n", i,i,i*i*i);i++;
    }while (i<=stop);
    printf("Number is %d and the cube of %d is: %d\n",i,i,i*i*i);i++;
    return 0;
}