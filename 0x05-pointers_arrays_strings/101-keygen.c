#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 * for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int i, sum = 0;
	char password[65];
	int target = 2772;
	
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < 64; i++)
	{
		password[i] = (rand() % 94) + 33;
		
		if (sum + password[i] > target)
		{
			password[i] = target - sum;
			break;
		}
		sum += password[i];
	}
	password[64] = '\0';
	printf("%s\n", password);
	return 0;
}
