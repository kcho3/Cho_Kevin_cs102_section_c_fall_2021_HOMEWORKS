#include <stdio.h>

int main()
{
	int  minutes, hours, outputmin;
	printf("Enter minutes: ");
	scanf("%d", &minutes);
	outputmin = minutes%60;

	hours = minutes/60;
	printf("%d hours ", hours);
	printf("%d minutes ", outputmin);
	return 0;
}

