#include <stdio.h>

#define MAX_INPUT_SIZE 1000

/* Reverse given string */

void reverse(char to[], char from[], int i);

int main() {
    int c, i = 0, temp;
    char current[MAX_INPUT_SIZE], reversed[MAX_INPUT_SIZE];

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            current[i] = c;
            ++i;
        }
    }

    current[i] = '\0';

    temp = i;

    reverse(reversed, current, i - 1);

    reversed[i] = '\0';

    printf("%s\n", reversed);

    return 0;
}

void reverse(char to[], char from[], int i) {
    int a = 0;
    while ((to[a] = from[i]) != '\0') {
        ++a;
        --i;
    }
    to[a] = '\0';
}