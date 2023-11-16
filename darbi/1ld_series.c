#include <stdio.h>
#include <math.h>

double mans_sinuss(double x ) {
    double a, S;
    int k = 0;

    a = pow(-1, k) * pow(x, 4 * k + 2) / 1.0;
    S = a;
    printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);

    while (k < 500) {
        k++;
        a = a * (-1) * x * x * x * x / ((2 * k) * (2 * k + 1));
        S = S + a;
        // printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
    }

    return S;
}

int main() {
    double x = 3, y, yy;
    y = sin(x * x);
    printf("standarta funkcijas sin - y=sin(%.2f * %.2f)= %.2f\n", x, x, y);

    yy = mans_sinuss(x);
    printf("lietotāja funkcijas sin - y=mana_funkcija(%.2f)= %.2f\n", x, yy);

    return 0;
}