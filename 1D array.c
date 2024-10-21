#include <stdio.h>

int main() {
    int i;
    int marks[18] = {33, 5, 6, 76, 9, 7, 23, 24, 26, 
                     33, 5, 6, 76, 9, 7, 23, 24, 26};
    
    for(i=0; i<18; i++){
        printf("marks [%d] = %d\n", i, marks[i]);
    }
    
    return 0;
}