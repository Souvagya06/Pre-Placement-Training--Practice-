//create a structure named book with members title, author and price. also write a program to input details of 3 books and display book.
#include <stdio.h>
typedef struct BookDetails {
    char title[50];
    char author[50];
    float price;
} bd;

int main() {
    bd b1 = {"Python_Basics", "ABC_Publishers", 300};
    bd b2 = {"C_Programming", "DK_Anand", 350};
    bd b3 = {"Mathematics", "NCERT", 215};
    printf ("Book 1 \n");
    printf ("Title: %s, Author: %s, Price: %f\n", b1.title, b1.author, b1.price);
    printf ("Book 2 \n");
    printf ("Title: %s, Author: %s, Price: %f\n", b2.title, b2.author, b2.price);
    printf ("Book 3 \n");
    printf ("Title: %s, Author: %s, Price: %f\n", b3.title, b3.author, b3.price);
}