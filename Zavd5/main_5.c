#include <stdio.h>

#define MOD 12345

int count_sequences(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n == 2) return 4;

    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    return dp[n];
}

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    printf("Кількість шуканих послідовностей: %d\n", count_sequences(n));

    return 0;
}
