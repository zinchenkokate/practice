#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int minSteps(int x, int y) {
    if (x == y) return 0;
    int dist = y - x;
    if (dist <= 2) return dist;

    int steps = 2;
    int covered = 2;
    while (covered < dist) {
        steps++;
        covered += steps - 1;
    }

    return steps;
}


int main() {
    printf("%d\n", minSteps(45, 48)); // Should output: 3
    printf("%d\n", minSteps(45, 49)); // Should output: 3
    printf("%d\n", minSteps(45, 50)); // Should output: 4
    printf("%d\n", minSteps(45, 51)); // Should output: 4
    return 0;
}
