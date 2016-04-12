/* Program demonstrating how to use printf */

#include <stdio.h> // required for printf

int main() {
    char c = 'a';
    int i = 5;
    long l = 2 << 16;
    float f = 42.67;
    double d = 109.2;
    char *s = "hello";
    int *p = &i; // more on the & and * symbols later

    int one = 87;
    int two = 15;
    int res = 87 - 15;
    char *sub = "minus";
    char *eq = "equals";

    printf("Here is an int %i and a char %c and a long %li\n", i, c, l);
    printf("and a float %f and a double %f\n", f, d);
    printf("and a string %s and a pointer %p\n", s, p);
    printf("%i %s %i %s %i\n", one, sub, two, eq, res);

    return 0;
}
