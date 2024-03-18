#include <stdio.h>

int main() {
    char N[31];
    int B, size, i, num = 1, sum = 0;

    scanf("%s %d", N, &B);

    for (i = 0; i < 30; i++) {
        if (N[i + 1] == '\0') {
            size = i;
            break;
        }
    }

    for (i = size; i >= 0; i--) {
        if (N[i] >= '0' || N[i] <= '9') {

        }
    }




    return 0;
}