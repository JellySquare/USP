#include <stdio.h>

#define MAX_LINE_SIZE 1000

void copy(char to[], char from[]);

int main() {
    int c, current, i;
    char currentArr[MAX_LINE_SIZE];
    char listChar[MAX_LINE_SIZE][MAX_LINE_SIZE];
    i = current = 0;

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            currentArr[i] = c;
            ++i;
        } else {
            if (i > 80) {
                currentArr[i + 1] = '\0';
                copy(listChar[current], currentArr);
                ++current;
            }
            i = 0;
        }
    }

    if (current > 0)
        for (i = 0; i < current; ++i)
            printf("%s\n", listChar[i]);
    
    return 0;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}