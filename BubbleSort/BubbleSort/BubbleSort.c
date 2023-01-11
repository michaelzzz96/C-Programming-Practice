#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main()
{
	int i, pass, temp, grades[SIZE] = { 95, 75, 87, 68, 98, 88};

	for (i = 0; i < SIZE; i++)
		printf(" %i", grades[i]);
	printf("\n");
	
	for (pass = 1; pass <= SIZE - 1; pass++) 
	{
		for (i = 0; i < SIZE - 1; i++) 
		{
			if (grades[i] > grades[i + 1]) 
			{
				temp = grades[i];
				grades[i] = grades[i + 1];
				grades[i + 1] = temp;
			}
		}
	}

	for (i = 0; i < SIZE; i++) 
		printf(" %i", grades[i]);
	printf("\n");
	system("pause");
	return 0;
}