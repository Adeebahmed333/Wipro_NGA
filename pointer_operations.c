#include <stdio.h>

int main() {
    int normal_var = 10;
    int *pointer_var;

    // Store memory address of normal_var in pointer_var
    pointer_var = &normal_var;

    // Print value of normal_var using pointer
    printf("Value of normal_var: %d\n", *pointer_var);

    // Change value of normal_var using pointer
    *pointer_var = 20;

    // Print new value of normal_var
    printf("New value of normal_var: %d\n", *pointer_var);

    return 0;
}