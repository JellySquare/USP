#include <stdio.h>

double power(double a, double b);

int main() {

    double num1 = 2, num2 = -10;

    if (num2 >= 0)
        printf("%.0f\n", power(num1, num2));
    else
        printf("%f\n", power(num1, num2));

    return 0;
}

double power(double a, double b) {

    double digit = a;
    if (b > 0)
        for (int i = 1; i < b; ++i)
            digit *= a;
    else if (b < 0) 
        for (int i = b; i < 1; ++i)
            digit /= a;
    else
        return 1;

    return digit;

}