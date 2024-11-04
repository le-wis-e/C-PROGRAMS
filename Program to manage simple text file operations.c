#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

// Function to write a sentence to "data.txt"
void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char sentence[MAX_LENGTH];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, MAX_LENGTH, stdin);

    fputs(sentence, file);
    fclose(file);
    printf("Sentence written to file successfully.\n");
}

// Function to read content from "data.txt" and display it
void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char ch;
    printf("Content of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

// Function to append a second sentence to "data.txt"
void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char sentence[MAX_LENGTH];
    printf("Enter a second sentence to append: ");
    fgets(sentence, MAX_LENGTH, stdin);

    fputs(sentence, file);
    fclose(file);
    printf("Sentence appended to file successfully.\n");
}

int main() {
    writeToFile();       // Step 1: Write a sentence to the file
    readFromFile();      // Step 2: Read and display the file content
    appendToFile();      // Step 3: Append a second sentence
    readFromFile();      // Step 2 again: Read and display updated file content

    return 0;
}