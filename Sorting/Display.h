#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

class Display
{
private:
	std::vector<sf::RectangleShape> lines;
public:
	void Draw();
	void Clear();
};