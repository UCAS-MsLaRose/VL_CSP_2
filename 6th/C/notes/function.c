#include <stdio.h>
// Example 1 (no return and no parameters)
int x = 0;
void add(){
    x++;
}

// Example 2
float divide(int num_one, int num_two){
    return (float) num_one/ num_two;
}

// Example 3
void hello(char* name){
    printf("Hello %s. Welcome to my program!\n", name);
}

int main(){
    //Example 1 continued 
    add();
    add();
    add();
    add();
    add();
    printf("%d\n", x);

    // Example 2 continued 
    float quotiant = divide(8,4);
    printf("%.2f\n", quotiant);
    printf("%.2f\n", divide(75,2));

    // Example 3 continued 
    hello("Alex");
    hello("Katie");
    hello("Andrew");
    hello("Tia");
    hello("Treyson");

    return 0;
}