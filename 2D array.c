2D array
#include <stdio.h>

int main() {
    int i,j;
    int marks[6][3] = {{33,5,6}, {76,9,7}, {23,24,26},
                       {33,5,6}, {76,9,7}, {23,24,26}};
    
    for(i=0;i<6;i++){
        for(j=0;j<3;j++){
            printf("marks [%d][%d]=%d\n",i,j,marks[i][j]);
        }
    }
    return 0;
}