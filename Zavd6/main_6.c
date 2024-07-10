#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double length;

    printf("Введіть координати початку вектора (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Введіть координати кінця вектора (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    // Обчислення різниць координат
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Обчислення довжини вектора
    length = sqrt(dx * dx + dy * dy);

    // Виведення довжини з точністю до 6 знаків після коми
    printf("Довжина вектора: %.6lf\n", length); 

    return 0;
}