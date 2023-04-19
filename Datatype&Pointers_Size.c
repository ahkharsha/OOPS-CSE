#include <stdio.h>

int main() {
    // Size of data types
    printf("Size of char: %ld bytes\n", sizeof(char));
    printf("Size of short: %ld bytes\n", sizeof(short));
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of long: %ld bytes\n", sizeof(long));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    printf("Size of long double: %ld bytes\n", sizeof(long double));

    // Size of pointers
    printf("Size of int pointer: %ld bytes\n", sizeof(int*));
    printf("Size of char pointer: %ld bytes\n", sizeof(char*));
    printf("Size of double pointer: %ld bytes\n", sizeof(double*));

    // Pointers and their sizes
    int x = 10;
    int *p = &x;
    printf("Value of p: %p, size of p: %ld bytes\n", p, sizeof(p));

    char str[] = "Hello, world!";
    char *q = str;
    printf("Value of q: %p, size of q: %ld bytes\n", q, sizeof(q));

    double arr[] = {1.2, 3.4, 5.6};
    double *r = arr;
    printf("Value of r: %p, size of r: %ld bytes\n", r, sizeof(r));

    return 0;
}
