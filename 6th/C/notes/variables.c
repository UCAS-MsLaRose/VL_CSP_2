// This is how you write comments in C! 
#include <stdio.h> // lets you use inputs and outputs

int main(){
    int number;
    const float pi = 3.14;
    char grade = 'A'; //single character uses single quotes
    char name[] = "Jake"; //string use [] after naming variable 
    char user[50];

    printf("Tell me your name\n");
    scanf("%s", &user);


    printf("Tell me how old you are:\n");
    scanf("%d", &number);



    printf("Working!\n");
    printf("%d\n", number);
    printf("The digits of pi are: %f\n", pi);
    printf("Your name is %s you are %d old. You have an %c in programming. Pi is %f\n", user, number, grade, pi);
    return 0;
}