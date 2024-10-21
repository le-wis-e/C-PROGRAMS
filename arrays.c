#include <stdio.h>

int main() {
    int i,j,k;
    int marks[2][3][3]={{{33,5,6},{76,9,7},{23,24,26}},
    {{33,5,6},{76,9,7},{23,24,26}}};
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
        printf("marks [%d][%d][%d]=%d\n",i,j,k, marks[i][j][k]);
        
        }
        }
        }
    return 0;
}

