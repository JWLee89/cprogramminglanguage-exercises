#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    // Heading
    printf("Degrees Celsius    Fahrenheit \n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        // Changed order from previous exercise
        printf("%3.0f \t\t %6.1f\n",  celsius, fahr);
        fahr = fahr + step;
    }
    return 0;
}
