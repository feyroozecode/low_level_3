#include <stdio.h>

int main(){

    // Pointers
    int num = 99;
    int *ptr = &num;

    printf("Value of num: %d, Value trough pointer: %d\n", num, *ptr);
    printf("Address of num: %p, Value of ptr: %p\n", &num, ptr);

    // Tableau
    int numbers[5] = {15, 30, 45, 56};
    printf("First element of array: %d\n", numbers[0]);
    printf("Second element using pointer arithmetic: %d\n", *(numbers + 1));

    return 0;
}
