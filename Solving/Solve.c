#include <stdio.h>

int main() {
    int T, C, i;
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d", &C);
        printf("%d ", C / 25);
        C %= 25;
        printf("%d ", C / 10);
        C %= 10;
        printf("%d ", C / 5);
        C %= 5;
        printf("%d\n", C);
    }

    return 0;
}