// Printf the memory address of the variable pointer
#include <stdio.h>

int main(void) {
    int a = 10;
    int *pointer = &a;

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *&a);
    printf("The memory address of a is %p\n", &a);

    printf("The value of pointer is %p\n", pointer);
    printf("The memory address of pointer is %p\n", &pointer);

    // modify *pointer will change the value of variable a
    *pointer = 100;

    printf("The modify value of a is %d\n", a);
    printf("The modify value of pointer is %p\n", pointer);
    printf("The memory address of a is %p\n", &a);
    printf("The memory address of pointer is %p\n", &pointer);

    printf("We can get the value from pointer by add * in front: %d\n", *pointer);

    return 0;
}