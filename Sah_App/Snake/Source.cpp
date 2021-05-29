#include <iostream>
#include <SFML/Graphics.hpp>
#include "Snake.h"
using namespace std;
using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Snake");
	window.setFramerateLimit(60);

	Snake zmijetina(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		zmijetina.continueMoving();
		zmijetina.drawSnake();

		window.display();
	}
	return 0;
}