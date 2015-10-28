#include <stdio.h>

int main() {
    
    int c, numBlanks, numTabs, numNewLine;
    numBlanks = numTabs = numNewLine = 0;

    while ((c = getchar()) != EOF) {

        switch (c) {
            case ' ':
                ++numBlanks;
                break;
            case '\t':
                ++numTabs;
                break;
            case '\n':
                ++numNewLine;
                break;
        }

    }
    printf("Blanks: %d, Tabs: %d, New Lines: %d\n", numBlanks, numTabs, numNewLine);

    return 0;
}
