#include "Sort.h"


void Sort::BubbleSort(std::vector<int>& arr)
{
	int temp = 0;
	int nbrOfSortValues = 0;

	for (int j = 0; j < arr.size(); ++j)
	{
		for (int i = arr.size() - 1; i > nbrOfSortValues; --i)
		{
			if (arr[i-1] > arr[i])
			{
				//Swap both
				temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
			}
		}
		nbrOfSortValues++;
	}
}