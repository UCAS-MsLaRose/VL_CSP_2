// This is a comment in C 
#include <stdio.h> // lets us create inputs and outputs

int main(){
    int number = 12;
    const float pi = 3.14;
    char name[] = "Xavier";
    char person[50];
    int age;

    printf("Tell me your name\n");
    scanf("%s", &person);

    printf("Tell me how old you are\n");
    scanf("%d", &age);

    printf("Name is %s and age is %d\n", person, age);
    printf("We have the number %d\n", number); // \n tells the computer to move to the next line
    printf("%f\n", pi);
    printf("%s is %d years old\n", name, age);
    return 0; //always the last line of main
}