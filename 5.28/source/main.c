#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char ch;
	printf("Enter capital letter : "); scanf_s("%c", &ch);
	ch = ch +32;
	printf("%c\n", ch);
	system("pause");
	return 0;
}