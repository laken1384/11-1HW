#include<stdio.h>
#include<stdlib.h>

void high(int i, char A, char B, char C);

int main(void)
{
	int j;

	printf("�п�J�e���𪺰��סG");
	scanf_s("%d", &j);

	high(j, '1', '2', '3');

	system("pause");
}

void high(int i, char A, char B, char C)
{
	if (i== 1)
	{
		printf("%c --> %c\n", A, C);
	}
	else
	{
		high(i - 1, A, C, B);
		printf("%c --> %c\n", A, C);
		high(i - 1, B, A, C);
	}
}