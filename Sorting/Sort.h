#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

#define LOG(x) std::cout << x << std::endl;

class Sort
{
private:
	std::vector<int> vect;
public:
	void BubbleSort();

	void FillVector(int vectSize);
	void Shuffle();

	const std::vector<int> GetVector();
};