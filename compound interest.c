//A program to find the compuond interest
#include <stdio.h>
#include <math.h>
int main() { //printf(),scanf() // dec and initialization
    float principal_amount,rate,total_number_of_years,amount,compound_interest;
    
    printf("Enter principal_amount:");
    scanf("%f",&principal_amount);
    
    printf("Enter rate:");
    scanf("%f",&rate);
    
    
    printf("Enter total_number_of_years:");
    scanf("%f",&total_number_of_years);
    
    
    
    amount = principal_amount * pow((1+rate/100),total_number_of_years);
    
    compound_interest = amount - principal_amount;
    
    printf("compound_interest is %.2f",compound_interest);
    

    
    
    
    return 0;
    
}
