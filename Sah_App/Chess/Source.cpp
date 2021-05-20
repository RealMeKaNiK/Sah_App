#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"
using namespace std;
using namespace sf;

void drawMarker(RenderWindow* window, int xAxis, int yAxis)
{
	RectangleShape marker;
	marker.setSize(Vector2f(70.f, 70.f));
	marker.setFillColor(Color(0, 250, 0));
	marker.setOutlineThickness(10.f);
	marker.setOutlineColor(Color(230, 29, 29));
	marker.setPosition(xAxis, yAxis);
	window->draw(marker);
}

int main()
{ 
	sf::RenderWindow window(sf::VideoMode(1400, 1000), "Hello, SFML world!");
	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		Board board(&window);
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			int x = Mouse::getPosition(window).x;
			int y = Mouse::getPosition(window).y;
			drawMarker(&window, x, y);
		}
		window.display();
	}
	return 0;
}
