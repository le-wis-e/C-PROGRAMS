//cube of the numbers
#include <stdio.h>

int main() {
    int numTerms, i, start, stop;

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    // Prompt for start/stop choices
    printf("Choose how to control the loop:\n");
    printf("1. Start and stop based on user input\n");
    printf("2. Use a for loop\n");
    printf("3. Use a while loop\n");
    printf("4. Use a do...while loop\n");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the starting number: ");
            scanf("%d", &start);
            printf("Enter the stopping number (inclusive): ");
            scanf("%d", &stop);

            for (i = 1; i <= numTerms; i++) {
                if (i >= start && i <= stop) {
                    printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
                }
            }
            break;

        case 2: 
            // Using for loop
            for (i = 1; i <= numTerms; i++) {
                printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
            }
            break;

        case 3:
            // Using while loop
            i = 1;
            while (i <= numTerms) {
                printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
                i++;
            }
            break;

        case 4: 
            // Using do...while loop
            i = 1;
            do {
                printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
                i++;
            } while (i <= numTerms);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}