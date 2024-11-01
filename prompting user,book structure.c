//Book structure
#include <stdio.h>

 int main() {
    char Title[30];
    char Author[30];
    char ISBN[13];
    int Publication_year;
    float Price;

    printf("Title:");
    scanf("%s", &Author);
    
    printf("Author:");
    scanf("%s", &Title);
    
    printf("ISBN:");
    scanf("%s", &ISBN);
    
    printf("Publication_year:");
    scanf("%d", &Publication_year);
    
    printf("Price:");
    scanf("%f", &Price);
    
    
    return 0;
}
    

