#define LOWER    0
#define UPPER    300
#define STEP     20
#include <stdio.h>

int main() {
    int fahr;
    printf("Degrees celsius \t Fahrenheit \n");
    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        float celsius = (fahr - 32) * 5.0/9.0;
        // Float to 2 decimal place
        printf("%.2f \t\t\t %d \n", celsius, fahr);
    }
}
