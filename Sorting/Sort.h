#pragma once
#include <iostream>
#include <vector>


#define LOG(x) std::cout << x << std::endl;

class Sort
{
public:
	void BubbleSort(std::vector<int>& arr);
};