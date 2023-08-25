#include "Sort.h"


void Sort::BubbleSort()
{
	int temp = 0;
	static int sortedValues = 0;

	for (int j = 0; j < vect.size(); ++j)
	{
		for (int i = vect.size() - 1; i > sortedValues; --i)
		{
			if (vect[i-1] > vect[i])
			{
				//Swap both
				temp = vect[i-1];
				vect[i-1] = vect[i];
				vect[i] = temp;

				return;
			}
		}
		sortedValues++;
	}
}

void Sort::FillVector(int vectSize)
{
	for (int i = 0; i < vectSize; ++i)
	{
		vect.push_back(i+1);
	}
	return;
}

void Sort::Shuffle()
{
	auto rng = std::default_random_engine{};
	std::shuffle(std::begin(vect), std::end(vect), rng);
}

const std::vector<int> Sort::GetVector()
{
	return vect;
}
