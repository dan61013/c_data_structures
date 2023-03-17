#include <stdio.h>
#include <stdbool.h>

struct Point {
    int x;
    int y;
};

int main(void) {
    struct Point p;
    struct Point *pp = &p;
    struct Point x;
    bool z;

    p.x = 1;
    int *a;
    a = &(p.x);

    printf("The value of a is %p\n", a);
    printf("The memory address of a is %p\n", &a);
    printf("The memory address of a.value is %d\n", *a);

    pp -> x = 1;

    printf("pp is %d\n", *pp);
    printf("The memory address of x is %p\n", pp);
    printf("The memory address of pp is %p\n", &pp);
    printf("The value of p is %d\n", *&p);
    printf("The value of x is %d\n", x);

    z = (p.x == (pp -> x));
    printf("(p.x = 1) == (pp -> x= 1), %d\n", z);

    z = ((*pp).x == (pp -> x));
    printf("(*pp).x == (pp -> x), %d\n", z);
    
    return 0;
}