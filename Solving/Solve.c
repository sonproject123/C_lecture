#include <stdio.h>

int main() {
    int N, M, i, j, k, max=0;
    int arr[100];

    scanf_s("%d %d", &N, &M);

    for (i = 0; i < N; i++)
        scanf_s("%d", arr[i]);

    for (i = 0; i < N - 2; i++) {
        if (arr[i] > M)
            continue;
        for (j = i + 1; j < N - 1; j++) {
            if (arr[i] + arr[j] > M)
                continue;
            for (k = j + 1; k < N; k++) {
                if (arr[i] + arr[j] + arr[k] > M)
                    continue;
                if (arr[i] + arr[j] + arr[k] > max)
                    max = arr[i] + arr[j] + arr[k];
            }
        }
    }

    printf("%d\n", max);

    return 0;
}