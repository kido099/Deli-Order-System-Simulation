#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int randNum;
	for (int i = 0; i<30000;i++)
	{
		randNum = rand()%1000;
		printf("%d\n",randNum);
	}	
	return 0;
}
