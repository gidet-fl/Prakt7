#include <stdio.h>

void modify_values(double *a, double *b) {
    double orig_a = *a;
    double orig_b = *b;

    *a = orig_a * orig_b; 
    if (orig_b != 0.0) {
        *b = orig_a / orig_b; 
    } else {
        *b = 0.0;
        printf("[Внимание] Деление на ноль! Вторая переменная установлена в 0.\n");
    }
}

int main(void) {
    double num1 = 5.0;
    double num2 = 2.0;

    printf("Исходные значения: num1 = %.2f, num2 = %.2f\n", num1, num2);

    modify_values(&num1, &num2);

    printf("Измененные значения: num1 (произведение) = %.2f, num2 (частное) = %.2f\n", num1, num2);

    return 0;
}
