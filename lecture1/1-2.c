#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(void) {
    struct Point p;
    struct Point *pp = &p;

    pp -> x = 1;

    printf("pp is %d\n", *pp);
    printf("The memory address of x is %p\n", pp);
    printf("The memory address of pp is %p\n", &pp);
    
    return 0;
}