#include <stdio.h>

int main(void)
{
	const char* ptr[4] = { "Korea", "Seoul", "Mapo", "152¹øÁö2/3" };

	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", ptr[i]);
	}
	
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%s\n", ptr[i]);
	}
	printf("Jongno\n");

	printf("%s\n", ptr[3]);


	return 0;
}