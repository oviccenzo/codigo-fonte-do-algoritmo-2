#include <stdio.h>

int main() {
    int t, i, M[3][4];
    
    // Preenchendo a matriz M
    for (t = 0; t < 3; ++t) {
        for (i = 0; i < 4; ++i) {
            M[t][i] = (t * 8) + i + 1;
        }
    }
    
    // Exibindo a matriz M
    for (t = 0; t < 3; ++t) {
        for (i = 0; i < 4; ++i) {
            printf("M[%d][%d] = %d ", t, i, M[t][i]);
        }
        printf("\n");
    }

    return 0;
}

