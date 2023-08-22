#include <iostream>
#include <vector>
#include "Sort.h"
#include <chrono>
#include <algorithm>
#include <random>
#include <SFML/Graphics.hpp>

enum SortingType
{
	BubbleSort = 0,
};

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

void Sorting(Sort& sort, SortingType sType, std::vector<int>& vect)
{
	switch (sType)
	{
	case BubbleSort:
		sort.BubbleSort(vect);
		break;
	default:
		std::cout << "Aucun type de sorting n'a été selectionné" << std::endl;
	}
}

void FillVector(int vectSize, std::vector<int>& vect)
{
	for (int i = 0; i < vectSize; ++i)
	{
		vect.push_back(i);
	}
}

int main()
{
	//std::vector<int> arr;
	//FillVector(10000, arr);

	//Sort sort;

	////-----------------------------
	////Bubble sort :
	// 
	////Mélange le vecteur
	//auto rng = std::default_random_engine{};
	//std::shuffle(std::begin(arr), std::end(arr), rng);
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
		
		sf::RenderWindow window(sf::VideoMode(1440, 720), "SFML works!");

		sf::RectangleShape line(sf::Vector2f(5, window.getSize().y/2));
		line.setPosition(0, window.getSize().y - line.getSize().y);
		//sf::CircleShape shape(100.f);
		//shape.setFillColor(sf::Color::Green);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear();
			window.draw(line);
			window.display();
		}

		return 0;
}