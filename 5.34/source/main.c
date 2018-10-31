#include<stdio.h>
#include<stdlib.h>
long int base_s(int i,int j);
int main(void)
{
	int base, exponent;
	printf("Enter base : "); scanf_s("%d", &base);
	printf("Enter exponent : "); scanf_s("%d", &exponent);
	printf("%d\n", base_s(base, exponent));
	system("pause");
	return 0;
}
long int base_s(int i, int j)
{
	int ans;
	if (j > 0)
	{
		ans = i*base_s(i, j - 1);
		return ans;
	}
	else
	{
		return 1;
	}

}