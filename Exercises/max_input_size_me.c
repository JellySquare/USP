#include <stdio.h>

#define MAX_LINE_SIZE 1000000

void copy(char to[], char from[]);

int main() {
    int c, max, current;
    char currentArr[MAX_LINE_SIZE], maxArr[MAX_LINE_SIZE];
    int i = 0;
    max = 0;

    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            currentArr[i] = c;
            ++i;
        } else {
            if (i > max) {
                max = i;
                currentArr[max + 1] = '\0';
                copy(maxArr, currentArr);
            }
            i = 0;
        }
    }

    if (max > 0)
        printf("%s\n", maxArr);
    
    return 0;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}