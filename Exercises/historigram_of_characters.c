#include <stdio.h>

int main() {

    int cfreq[26], c = 0;

    int num = 0, white = 0, special = 0;

    for (int i = 0; i < 26; i++)
        cfreq[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++num;
        else if (c == ' ' || c == '\n' || c == '\t')
            ++white;
        else if (c == '!' || c == ',' || c == '.' || c == '?' || c == ';' || c == '\'' || c == '\"'|| c == '$' || c == '@' 
        || c == '#' || c == '%' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-' || c == '/' || c == '`')
            ++special;
        else
            ++cfreq[c - 'a'];
    }

    printf("character frequency =");
    for (int i = 0; i < 26; ++i)
        printf(" %d", cfreq[i]);

    printf(", white spaces = %d, numbers = %d, special characters = %d\n", white, num, special);

    return 0;
}