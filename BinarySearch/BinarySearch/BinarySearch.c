#include <stdio.h>
#include <stdlib.h>
#define SIZE 13

int binarySearch(int array[], int size, int key)
{
	int low = 0, high = size - 1, middle;

	while (low <= high) 
	{
		middle = (low + high) / 2;

		if (key == array[middle])
		{
			return middle;
		}
		else if (array[middle] > key) 
		{
			high = middle - 1;
		}
		else
		{
			low = middle + 1;
		}
	}
	return -1;
}

int main() 
{
	int grade[SIZE] = { 75,77,80,82,85,87,90,93,95,96,99 };
	int key = 91;
	int result;

	result = binarySearch(grade, SIZE, key);
	printf("%i was found at location: %i\n", key, result);
	system("pause");
	return 0;
}