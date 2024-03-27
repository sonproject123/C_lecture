#include <stdio.h>

int main() {
    int N, M, i, j, ini, inj, count, min = 999999;
    char condition;
    char arr[51][51];
    scanf("%d %d", &N, &M);

    for (i = 0; i < N; i++)
        scanf("%s", arr[i]);

    for (i = 0; i <= M - 8; i++) {
        for (j = 0; j <= N - 8; j++) {
            count = 0;
            condition = 'W';
            for (ini = i; ini < i + 8; ini++) {
                for (inj = j; inj < j + 8; inj++) {
                    if (arr[ini][inj] != condition)
                        count++;
                    if (condition == 'W')
                        condition = 'B';
                    else
                        condition = 'W';
                    printf("(%d, %d) °ª '%c', condition: '%c', count: %d\n", ini, inj, arr[ini][inj], condition, count);
                }
                if (condition == 'W')
                    condition = 'B';
                else
                    condition = 'W';
            }
            if (count < min)
                min = count;

            count = 0;
            condition = 'B';
            for (ini = i; ini < i + 8; ini++) {
                for (inj = j; inj < j + 8; inj++) {
                    if (arr[ini][inj] != condition)
                        count++;
                    if (condition == 'W')
                        condition = 'B';
                    else
                        condition = 'W';
                    printf("(%d, %d) °ª '%c', condition: '%c', count: %d\n", ini, inj, arr[ini][inj], condition, count);
                }
                if (condition == 'W')
                    condition = 'B';
                else
                    condition = 'W';
            }
            if (count < min)
                min = count;
        }
    }

    printf("%d\n", min);
    return 0;
}