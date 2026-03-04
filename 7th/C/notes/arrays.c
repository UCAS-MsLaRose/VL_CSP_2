#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Example 1
    int grades[] = {78,18,99,87,94,86,88,90};
    printf("%d\n", grades[1]);
    grades[1] = 70;
    printf("%d\n", grades[1]);

    // Example 2
    float measurements[10];
    measurements[0] = 5.25;
    measurements[1] = 0.34;
    measurements[2] = 1.99;
    measurements[3] = 3.48;

    printf("%.2f %.2f %.2f %.2f %.2f \n", measurements[0],measurements[1],measurements[2],measurements[3],measurements[4]);

    //Example 3
    char names[][20] = {"Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"};

    printf("%s\n", names[6]);

    // For Loops Example 1
    for(int i = 20; i > 0; i--){
        printf("%d ", i);
    }
    printf("\n"); //makes a new line

    //for loops example 2
    int names_len = sizeof(names)/ sizeof(names[0]);
    for(int x = 0; x < names_len; x++){
        printf("%s LaRose\n", names[x]);
    }

    //for loops example 3
    srand(time(NULL));

    int number = rand() % 10 +1;
    int count = 1;

    for(count; count < number; count++){
        printf("duck\n");
    }
    printf("GOOSE!\n");

    return 0;
}