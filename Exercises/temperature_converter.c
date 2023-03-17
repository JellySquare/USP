#include <stdio.h>

#define MIN -100
#define MAX 300
#define STEP 20 

int main() {
    float fahrenheit = 0, celsius = 0;

    for (fahrenheit = MIN; fahrenheit <= MAX; fahrenheit += STEP) {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("Fahrenheit: %4.0f - Celsius: %6.2f\n", fahrenheit, celsius);
    }
    return 0;
}
