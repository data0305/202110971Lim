#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", str);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("\n�Էµ� ���ڿ��� \n\"%s\"\n�Դϴ�.\n", str);

    printf("\n�Էµ� ���ڿ��� ����= %d\n", (int)strlen(str));

    return 0;
}