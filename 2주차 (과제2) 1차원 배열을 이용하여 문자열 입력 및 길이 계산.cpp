#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("문자열을 입력하세요 : ");
    scanf("%s", str);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("\n입력된 문자열은 \n\"%s\"\n입니다.\n", str);

    printf("\n입력된 문자열의 길이= %d\n", (int)strlen(str));

    return 0;
}