#include <stdio.h>

int main() {
	int times, integer;
	int max=-1000000, min = 1000000, sum = 0;
	float average;
	printf("Enter the times to input >> ");
	scanf_s("%d", &times);

	for (int i = 0; i < times; i++)
	{
		scanf_s("%d", &integer);
		sum += integer;
		if (integer > max)
		{
			max = integer;
		}
		if (integer < min) {
			min = integer;
		}
	}

	average = sum / times;

	printf("sum: %d\n", sum);
	printf("average: %6.2f\n", average);
	printf("max: %d\n", max);
	printf("min: %d\n", min);

	return 0;
}