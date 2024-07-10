#include <stdio.h>
#include <string.h>

// Функція для обчислення факторіалу
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    char word[15]; // Слово може мати до 14 букв
    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);

    // Масив для підрахунку частоти кожної букви
    int frequency[256] = {0};
    for (int i = 0; i < length; ++i) {
        frequency[(int)word[i]]++;
    }

    // Обчислення кількості анаграм
    unsigned long long num_anagrams = factorial(length);
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] > 1) {
            num_anagrams /= factorial(frequency[i]);
        }
    }

    printf("Кількість можливих анаграм: %llu\n", num_anagrams);

    return 0;
}
