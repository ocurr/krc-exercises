#include <stdio.h>

int main() {
    int c, numBlanks;
    numBlanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++numBlanks;

        if (c != ' ' || numBlanks <= 1)
            putchar(c);

        if (c != ' ' && numBlanks >= 1)
            numBlanks = 0;
    }

    return 0;
}
