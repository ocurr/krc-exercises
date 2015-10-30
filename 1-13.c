#include <stdio.h>
#include <math.h>

#define OUT 0
#define IN 1

int main() {

    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
        }

        if (state == IN) {
            putchar('#');
        } else {
            putchar('\n');
        }
    }

    return 0;
}
