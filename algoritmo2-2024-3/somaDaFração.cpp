#include <stdio.h>
#include <math.h>

int main() {
    double S = 0;
    for (int i = 0; i <= 19; i++) {
        S += pow(2, 21 - i) / (20 - i);
    }
    printf("S = %.2f\n", S);
    return 0;
}

