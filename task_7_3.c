#include <stdio.h>
#include <math.h>

double diff_of_abs(double a, double b) {
    return fabs(a) - fabs(b);
}

int main(void) {
    double x, y;
    while (scanf("%lf %lf", &x, &y) == 2) {
        double result = diff_of_abs(x, y);
        printf("%.4f\n", result);
    }
    return 0;
}
