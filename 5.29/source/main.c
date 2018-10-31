#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,c=1,g,i;
	printf("Enter two number : \n");
	scanf_s("%d%d", &a, &b);
	if (a > b) g = a;
	else g = b;
	for (i = 1; i < g; i++)
	{
		if ((a%i == 0) & (b%i == 0)) c = i;
	}
	if (c == 1) c = a*b;
	else c = a*b / c;
	printf("LCM : %d\n", c);
	system("pause");
	return 0;
}