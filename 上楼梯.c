#include<stdio.h>
int combine(int a, int b);
int main()
{
	int n;
	int num_2;
	int position;
	scanf_s("%d",&n);
	int num = 0;
	for (int num_1 = 0; num_1 <= n; num_1++)
	{
		if ((n - num_1) % 2 == 0)
		{
			num_2 = (n - num_1) / 2;
			position = num_2 + num_1;
			num += combine(position, num_2);
		}
		else
			continue;
	}
	printf_s("%d", num);
}

int combine(int a, int b)
{
	int tmp1 = 1;
	int tmp2 = 1;
	int n;
	for (int i = 1; i <= b; i++)
	{
		tmp1 = tmp1*i;
		tmp2 = tmp2*(a - i+1);
	}
	n = tmp2 / tmp1;
	return n;
}
