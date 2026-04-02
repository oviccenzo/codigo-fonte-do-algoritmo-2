#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    for (celsius = 1; celsius <= 100; celsius++) {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        printf("%d°C = %.2f°F\n", celsius, fahrenheit);
    }

    return 0;
}
