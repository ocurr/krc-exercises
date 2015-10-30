#include <stdio.h>

int main() {

    int c;

    int charFreq[('z'+1) - 'a'];

    for (int i=0; i<(('z'+1)-'a'); ++i) {
        charFreq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++charFreq[c-'a'];
        }
    }
    for (int i=0; i<(('z'+1)-'a'); ++i) {
        putchar(i+'a');
        putchar(':');
        putchar(' ');
        for (int n=0; n<charFreq[i]; ++n) {
            putchar('#');
        }
        putchar('\n');
    }

    return 0;
}
