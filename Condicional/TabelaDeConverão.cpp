#include <cstdio>
int main(){

    int n;

    for(n = 0; n < 101; n++){
        printf("%d°C = %d°F\n ", n ,( 9 * n / 5) + 32);
    }

    return 0;
}
