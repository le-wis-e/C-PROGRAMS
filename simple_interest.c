// C variable and data types
// preprocessor directive
#include <stdio.h> //scanf(),printf()
int main() {
    float principal_amount,time,rate,simple_interest;
    
    printf("Enter the principal_amount:");
    scanf("%f",&principal_amount);
    
    printf("Enter time:");
    scanf("%f",&time);
    
    printf("Enter rate:");
    scanf("%f",&rate);
    
    simple_interest = (principal_amount*time*rate)/100;
    
    printf("The simple_interest is %f",simple_interest);
    return 0;
}