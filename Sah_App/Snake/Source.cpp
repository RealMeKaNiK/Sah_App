#include <iostream>
#include <SFML/Graphics.hpp>
#include <chrono>
#include <thread>
#include "Snake.h"
using namespace std;
using namespace sf;
using namespace std::chrono;

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
		if (Keyboard::isKeyPressed(Keyboard::W))
		{
			zmijetina.moveSnake('W');
		}
		else if (Keyboard::isKeyPressed(Keyboard::S))
		{
			zmijetina.moveSnake('S');
		}
		else if (Keyboard::isKeyPressed(Keyboard::A))
		{
			zmijetina.moveSnake('A');
		}
		else if (Keyboard::isKeyPressed(Keyboard::D))
		{
			zmijetina.moveSnake('D');
		}
		else
		{
			zmijetina.continueMoving();
		}

		window.clear();
		zmijetina.drawSnake();
		window.display();

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	return 0;
}