#include<stdio.h>
#include<stdlib.h>
int fibonacci(long int i);
long int sam[65535];
int main(void)
{
	long int a;
	sam[0] = 0;
	sam[1] = 1;
	sam[2] = 1;
	printf("Enter n Fibonacci series : "); scanf_s("%ld", &a);
	for (int o = 0; o < a;o++)printf("%ld ", fibonacci(o));
	printf("\n");
	system("pause");
	return 0;
}
int fibonacci(long int i)
{
	if (i == 0)return 0;
	else if (i == 1 || i == 2) return 1;
	else
	{
		sam[i]= sam[i - 1] + sam[i - 2];
		return sam[i];
	}
}