#include <stdio.h>

int main()
{
	int arr[10], Size, i, Search, Flag, temp = 0;

    printf("siddhant\n");
	printf("\n Please Enter the size of an array :  ");
	scanf("%d", &Size);

	printf("\n Please Enter %d elements of an array: \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n Please Enter the Search Element  :  ");
	scanf("%d", &Search);

	Flag = 0;
	for (i = 0; i < Size; i++)
	{
		if (arr[i] == Search)
		{
			Flag = 1;
			break;
		}
	}

	if (Flag == 1)
	{
		printf("\n We found the Search Element %d at Position %d:\n", Search, i + 1);
	}
	else
	{
		printf("\n Sorry!! We haven't found the the Search Element %d\n", Search);
	}

	for (i = 0; i < Size; ++i)
	{
		for (int j = i + 1; j < Size; ++j)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The numbers in ascending order is:\n");
	for (i = 0; i < Size; ++i)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}