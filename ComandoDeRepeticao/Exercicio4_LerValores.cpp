//
// Created by Robert L Resende on 11/10/24.
//


#include <stdio.h>

void fibonacci(int n) {
    int a = 1, b = 2, next;

    printf("%d, %d", a, b);

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    int n = 10; // Número de elementos da sequência a serem gerados
    fibonacci(n);
    return 0;
}
