#include <stdio.h>
#include <math.h>

int main() {
    // a)
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", 20 - i * 5);
    }

    // b)
    int i;
	for (i = 0; i < 10; i++) {
        printf("%.0f\n", pow(4, i));
    }

    // c)
    int i;
    int a = 1, b = 1;
    printf("%d\n%d\n", a, b);
    for (i = 0; i < 8; i++) {
        int temp = a;
        a = b;
        b = temp + b;
        printf("%d\n", b);
    }

    // d)
    int i;
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", 16.0 / (1 << i)); // 1 << i é 2^i
    }

    // e)
    int i,a = 2;
    printf("%d\n", a);
    for (i = 0; i < 9; i++) {
        a += i + 3;
        printf("%d\n", a);
    }
    return 0;
}

