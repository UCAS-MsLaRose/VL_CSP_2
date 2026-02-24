// VL Strings notes
#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "Computer Science Principles";
    char book[100];
    char title[] = "Ms.LaRose";
    int num;


    //book[0] = 'T';
    //book[1] = 'h';
    //book[2] = 'e';
    printf("%s\n", subject);
    num = 10;
    printf("Write the title of a book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);

    printf("\nThe book is %s. That is a cool book\n", book);
    
    //concatenation in C 
    char name[] = "Vienna";
    char last[] = "LaRose";
    strcat(name, " ");
    strcat(name, last);

    char full_name[20];
    strcat(full_name, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

    printf("%s\n", full_name); //run-time error

    printf("%s\n", name);

    // length of string
    printf("%lu", strlen(name));

    return 0;
}