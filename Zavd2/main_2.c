#include <stdio.h>

// Функція для обчислення НСД (найбільшого спільного дільника) за допомогою алгоритму Евкліда
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для обчислення НСК (найменшого спільного кратного) для двох чисел
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;

    printf("Input number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];
    
    printf("Input %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }
    
    printf("Least common multiple: %d\n", result);
    
    return 0;
}
