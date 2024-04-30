#include <stdio.h>

void hanoi_tower(int n, char start, char sub, char end)
{
    if (n == 1) {
        printf("%c에서 원반 1를(을) %c로 옮김\n", start, end);
    }
    else {
        hanoi_tower(n - 1, start, end, sub);
        printf("%c에서 원반 %d를(을) %c로 옮김\n", start, n, end);
        hanoi_tower(n - 1, sub, start, end);
    }
}

int main() {
    hanoi_tower(3, 'A', 'B', 'C');
    return 0;
}