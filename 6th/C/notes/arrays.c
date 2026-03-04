#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    // Example 1
    int grades[] = {84,74,99,78,97};
    printf("%d\n", grades[2]); //single item from the array based on index number
    grades[2] = 85;
    printf("%d\n", grades[2]);

    //Example 2
    float distance[] = {72.1, 66.3, 45.2, 27.45};

    //Example 3
    char names[][20] = {"Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"};
    printf("%s\n", names[5]);

    // For loops Example 1
    for(int i = 20; i >= 0; i--){
        printf("%d ", i);
    }

    // For loops Example 2
    int grade_len = sizeof(grades)/ sizeof(grades[0]);
    for(int index = 0; index < grade_len; index++){
        printf("\n%d", grades[index] + 5);
    }

    // For loops example 3
    srand(time(NULL));
    int goose = rand() % 15 +1;
    int count = 1;
    for(count; count < goose; count++){
        printf("duck\n");
    }
    printf("GOOSE!\n");

    return 0;
}