//Book structure
#include <stdio.h>
#include <string.h>
struct Book {
    char Author[30];
    char Title[30];
    char ISBN[13];
    int Publication_year;
    float Price;
}Book;
int main() {
    //struct Book;
    strcpy(Book.Author, "JOHN SMITH");
    strcpy(Book.Title, "Introduction to C Programming");
    strcpy(Book.ISBN, "9780131103627");
    Book.Publication_year = 2022;
    Book.Price = 49.99;
    
    printf("Author: %s\n", Book.Author);
    printf("Title: %s\n", Book.Title);
    printf("ISBN: %s\n", Book.ISBN);
    printf("Publication_year: %d\n", Book.Publication_year);
    printf("Price: %.2f\n", Book.Price);
    
    return 0;
}
    

