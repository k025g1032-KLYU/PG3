#include<stdio.h>

int RecursiveWageLoop(int hour)
{
	if (hour == 1)
		return 100;

	return RecursiveWageLoop(hour - 1) * 2 - 50;
}

int NormalWageLoop(int hour)
{
	int wage = 1072 * hour;
	return wage;
}

int main() {
	int hour = 1;
	int RWtotal = 0;


	while (RecursiveWageLoop(hour) < NormalWageLoop(hour))
	{
		RWtotal += RecursiveWageLoop(hour);
		printf("Hour: %d, Recursive Wage: %d Recursive Total: %d, Normal Total: %d\n", hour, RecursiveWageLoop(hour), RWtotal, NormalWageLoop(hour));
		hour++;
	}
	

	return 0;
}