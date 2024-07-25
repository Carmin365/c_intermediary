#include <stdio.h>

int main() {
    int number = 50;
    int *ptr = &number; 

    printf("Number value: %d\n", number);
    printf("Number address: %p\n", &number);
    printf("Value of ptr (address): %p\n", ptr);
    printf("Value at the address indicated by ptr: %d\n", *ptr);

    return 0;
}


