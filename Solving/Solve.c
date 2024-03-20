#include <stdio.h>

int main() {
    int x, y, w, h, min = -1;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    if (w - x > min)
        min = w - x;
    if (h - y > min)
        min = h - y;
    if ((w - x) * (-1) > min)
        min = (w - x) * (-1);
    if ((h - y) * (-1) > min)
        min = (h - y) * (-1);

    printf("%d\n", min);
    return 0;
}