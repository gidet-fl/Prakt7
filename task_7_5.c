#include <stdio.h>

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

unsigned long long perrin_recursive(int n) {
    if (n == 0) return 3;
    if (n == 1) return 0;
    if (n == 2) return 2;
    return perrin_recursive(n - 2) + perrin_recursive(n - 3);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }
    printf("%llu\n", perrin_iterative(n));
    if (n <= 40) {
        printf("%llu\n", perrin_recursive(n));
    }
    return 0;
}
