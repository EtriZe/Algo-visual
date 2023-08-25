#include "Display.h"

Display::Display()
{
	window = new sf::RenderWindow(sf::VideoMode(1440, 720), "SFML works!");
}

void Display::GenerateGraph(Sort& sort)
{
	for (int i = 0; i < sort.GetVector().size(); ++i)
	{
		sf::RectangleShape* line = new sf::RectangleShape();

		line->setSize(sf::Vector2f(
			window->getSize().x / sort.GetVector().size(),
			(sort.GetVector()[i] * window->getSize().y) / sort.GetVector().size()
		));

		line->setOrigin(line->getSize().x, 0);
		line->rotate(180);
		line->setPosition((i * window->getSize().x)/ sort.GetVector().size(),window->getSize().y);
		line->setOutlineThickness((0.05 * line->getSize().x));
		line->setOutlineColor(sf::Color(0, 0, 0));

		
		lines.push_back(line);
	}
}

void Display::Draw()
{
	for (auto v : lines)
	{
		window->draw(*v);
	}
	
}

void Display::Clear()
{
	for (auto v : lines)
	{
		delete v;
	}

	lines.clear();

	window->clear();
}

void Display::Start()
{
	Sort sort;

	sort.FillVector(100);
	sort.Shuffle();


	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}

		Clear();

		sort.BubbleSort();
		GenerateGraph(sort);
		
		Draw();

		window->display();
	}
}