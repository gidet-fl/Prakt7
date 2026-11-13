#include <stdio.h>

// Итеративный подход
unsigned long long perrin_iterative(int n) {
    if (n == 0) return 3;
    if (n == 1) return 0;
    if (n == 2) return 2;

    unsigned long long p0 = 3, p1 = 0, p2 = 2;
    unsigned long long pn = 0;

    for (int i = 3; i <= n; i++) {
        pn = p1 + p0; 
        p0 = p1;
        p1 = p2;
        p2 = pn;
    }
    return p2;
}

// Рекурсивный подход
unsigned long long perrin_recursive(int n) {
    if (n == 0) return 3;
    if (n == 1) return 0;
    if (n == 2) return 2;
    return perrin_recursive(n - 2) + perrin_recursive(n - 3);
}

int main(void) {
    int n;
    printf("Введите номер числа Перрина (N >= 0): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Некорректный ввод.\n");
        return 1;
    }

    printf("Итеративно: P(%d) = %llu\n", n, perrin_iterative(n));
    
    if (n > 40) {
        printf("Рекурсивный расчет пропущен во избежание зависания системы...\n");
    } else {
        printf("Рекурсивно: P(%d) = %llu\n", n, perrin_recursive(n));
    }

    return 0;
}
