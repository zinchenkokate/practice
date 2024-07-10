#include <stdio.h>

int main() {
    int n, m, count = 0;

    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Число поза допустимим діапазоном.\n");
        return 1;
    }

    for (m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}