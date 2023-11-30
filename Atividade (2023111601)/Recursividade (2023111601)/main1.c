#include <math.h>

int k_esimo_digito(int n, int k) {

    if (k <= 0) {
        return -1;
    }


    if (k == 1) {
        return n % 10;

    } else {

        return k_esimo_digito(n / 10, k - 1);
    }
}

int main() {


    int resultado = k_esimo_digito(2845, 2);

    if (resultado != -1) {
        printf("O kesimo digito eh: %d\n", resultado);
    }

    return 0;
}
