// VL strings notes
#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "Computer Science Principles";
    char fruit[] = "grape";
    char book[50];

    printf("Subject: %s\nFruit: %s\n", subject, fruit);

    printf("What is your favorite book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);

    printf("Your book is %s. That is a really good book!\n", book);

    // Concatenation!
    char first[] = "Vienna";
    char last[] = "LaRose";

    //first[0] = 'K';
    //first[1] = 'a';
    //first[2] = 't';
    //first[3] = 'i';
    //first[4] = 'e';
    //first[5] = ' ';
    strcat(first, " ");
    strcat(first, last);

    printf("%s\n", first);

    char alpha[27];

    strcat(alpha, "abcdefghijklmnopqrstuvwxyz");

    printf("%s\n", alpha);

    // find the length of the string
    printf("%lu\n", strlen(first));

    return 0;
}