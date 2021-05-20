#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"
using namespace std;
using namespace sf;


int main()
{ 
	sf::RenderWindow window(sf::VideoMode(800, 800), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Board board(&window);
	while (window.isOpen())
	{
		int x = 0;
		int y = 0;
		bool mousePressed = false;
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			//cout << Mouse::getPosition(window).x << endl;
			//mousePressed = true;
			x = Mouse::getPosition(window).x;
			y = Mouse::getPosition(window).y;
			//drawMarker(&window, x, y);
		}
		board.drawBoard(8,8);
		

		window.display();
	}
	return 0;
}
