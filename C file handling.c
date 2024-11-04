// C file handling: writing a file
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    FILE *fptr; // declare pointer
    fptr = fopen("C:\\Users\\HomePC\\Desktop\\C programs\\file.txt", "w");

    if (fptr == NULL) {
        printf("Error opening the file");
        exit(1);
    }

    printf("Enter a random number:");
    scanf("%d", &number);

    fprintf(fptr, "The number entered is %d", number);
    fclose(fptr);
    printf("Number written successfully");

    return 0;
}