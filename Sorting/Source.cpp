#include <iostream>
#include <vector>
#include <chrono>

#include <SFML/Graphics.hpp>

#include "Sort.h"
#include "Display.h"


//CONST m'empêche de modifier le vecteur
void DisplayArray(const std::vector<int>& arr)
{
	//Display beginning
	std::cout << "[";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "..." << std::endl;

	//Display End
	std::cout << "...";
	for (int i = arr.size() - 11; i < arr.size() - 1; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "]" << std::endl << std::endl;

}



int main()
{

	// 
	//Sort sort;

	////-----------------------------
	////Bubble sort :
	// 
	
	//DisplayArray(arr);

	////Chrono
	//auto start = std::chrono::steady_clock::now();
	//Sorting(sort, BubbleSort, arr);
	//auto end = std::chrono::steady_clock::now();

	//std::cout << "-------------- Elapsed time --------------" << std::endl;
	//std::cout << "Nanoseconds : " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " ns" << std::endl;
	//std::cout << "Microseconds : " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " us" << std::endl;
	//std::cout << "Milliseconds : " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " ms" << std::endl;
	//std::cout << "Seconds : " << std::chrono::duration_cast<std::chrono::seconds>(end - start).count() << " s" << std::endl;
	//std::cout << "------------------------------------------" << std::endl << std::endl;

	//DisplayArray(arr);
	////-------------------------------------------


	//return 0;
			
	Display display;
	display.Start();
	

	return 0;
}