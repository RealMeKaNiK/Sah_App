#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"
using namespace std;
using namespace sf;

int main()
{ 
	sf::RenderWindow window(sf::VideoMode(1400, 1000), "Hello, SFML world!");
	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}
		Board board(&window);
		window.display();
	}
	return 0;
}
