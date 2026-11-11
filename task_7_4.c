#include <stdio.h>

void modify_values(double *a, double *b) {
    double orig_a = *a;
    double orig_b = *b;
    *a = orig_a * orig_b;
    if (orig_b != 0.0) {
        *b = orig_a / orig_b;
    } else {
        *b = 0.0;
    }
}

int main(void) {
    double num1 = 5.0;
    double num2 = 2.0;
    modify_values(&num1, &num2);
    printf("%.2f %.2f\n", num1, num2);
    return 0;
}
