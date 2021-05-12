#include <stdio.h>
int main(void)
{
	int totalSeconds, hour, minute, seconds;
	totalSeconds = 14000;
	hour = totalSeconds / 3600;
	minute = totalSeconds % 3600 / 60;
	seconds = totalSeconds % 3600 % 60;
	printf("14000 seconds:\n");
	printf("%dh %dm %ds", hour, minute, seconds);
}