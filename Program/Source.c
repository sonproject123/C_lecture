#include<stdio.h>

int main() {
    int N, i, j, max, index;
    int arr[1000000] = { 0, };
    int cparr[1000000] = { 0, };
    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < N; i++) {
        max = 0;
        for (j = 0; j < N; j++) {
            if (arr[j] > max) {
                max = arr[j];
                index = j;
            }
        }
        cparr[i] = max;
    }

    for (i = 0; i < N; i++)
        printf("%d \n", cparr[i]);
    return 0;
}