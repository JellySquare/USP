#include <stdio.h>

/* Copy input to output */

/*
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
*/

/* Character counting */

int main() {

    double nc;
    int c;

    for (nc = 0; (c = getchar()) != EOF;) {
        if (c != '\n') ++nc;
    }

    printf("%.0f", nc);
    
}