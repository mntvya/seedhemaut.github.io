#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double d, d2, e;

    printf("Enter the values of coefficients: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    e = pow(b, 2) - 4 * a * c;

    if (e < 0) {
        printf("Imaginary (complex) roots\n");
    }
    else {
        d = (-b + sqrt(e)) / (2 * a);
        d2 = (-b - sqrt(e)) / (2 * a);

        printf("The two roots are:\n");
        printf("%.2lf and %.2lf\n", d, d2);
    }

    return 0;
}
