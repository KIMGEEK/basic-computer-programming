#include <stdio.h>

int primeNum(int);

int main() {
	int num;
	printf("Enter the integer >> ");
	scanf_s("%d", &num);
	while (num)
	{
		printf("Prime number: ");
		for (int i = 2; i <= num; i++)
		{
			if (primeNum(i)) {
				printf("%d ", i);
			}
		}
		printf("\nEnter the integer >> ");
		scanf_s("%d", &num);
	}
	return 0;
}

int primeNum(int inspect) {
	int count = 0;
	for (int i = 2; i < inspect; i++)
	{
		if (inspect%i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		return inspect;
	}
	return 0;
}