#include <stdio.h>

void hanoi_tower(int n, char start, char sub, char end)
{
    if (n == 1) {
        printf("%c���� ���� 1��(��) %c�� �ű�\n", start, end);
    }
    else {
        hanoi_tower(n - 1, start, end, sub);
        printf("%c���� ���� %d��(��) %c�� �ű�\n", start, n, end);
        hanoi_tower(n - 1, sub, start, end);
    }
}

int main() {
    hanoi_tower(3, 'A', 'B', 'C');
    return 0;
}