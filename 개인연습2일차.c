#include <stdio.h>				// CodeUp Standard 100
#include <stdlib.h>				// 21.01.05 => N.1025 -> 

int main(void)
{
	int year, month, day;
	scanf("%d.%02d.%02d", &year, &month, &day);
	printf("%02d-%02d-%d", day, month, year);
}