#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void randomPasswordGene(int N)
{
	int i = 0;
	int randomizer = 0;

	srand((unsigned int)(time (NULL)));
	
	char numbers[] = "0123456789";

	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	char lettersC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char specialS[] = "!@#$%^&*?";

	char password[N];

	randomizer = rand() % 100;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 100;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = specialS[rand() % 8];
			randomizer = rand() % 100;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = lettersC[rand() % 26];
			randomizer = rand() % 100;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letters[rand() % 26];
			randomizer = rand() % 100;
			printf("%c", password[i]);
		}
	}
}

int main()
{
	int N = 10; 

	randomPasswordGene(N);

	return (0);
}
