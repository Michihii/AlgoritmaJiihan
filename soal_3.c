#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int BilanganPrima(int n) {
    if (n < 1) {
        return 0;
    }
    if (n == 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int Bilangan;
    scanf("%d", &Bilangan);

    if (BilanganPrima(Bilangan) == 0) {
        printf("BUKAN");
    } else {
        printf("PRIMA");
    }
    return 0;
}
