#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;

    printf("x1, y1, r1, x2, y2, r2: ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (d == 0 && r1 == r2) {
        printf("-1\n");  // Нескінченно багато точок перетину
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("0\n");   // Немає точок перетину
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("1\n");   // Одна точка перетину
    } else {
        printf("2\n");   // Дві точки перетину
    }

    return 0;
}
