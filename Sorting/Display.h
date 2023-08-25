#pragma once

#include <vector>
#include <SFML/Graphics.hpp>
#include <windows.h>
#include "Sort.h"

class Display
{
private:
	sf::RenderWindow* window;
	std::vector<sf::RectangleShape*> lines;
	

public:

	Display();
	void GenerateGraph(Sort& sort);
	void Draw();
	void Clear();
	void Start();
};