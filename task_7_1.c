#include <stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch == '\t') {
            putchar(' ');
            putchar(' ');
            putchar(' ');
        } else {
            putchar(ch);
        }
    }
    return 0;
}
