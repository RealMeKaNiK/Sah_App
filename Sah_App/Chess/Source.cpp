#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Figure.h"
using namespace std;
using namespace sf;

//Global Variables
static int ROWSIZE = 8;
static int COLLUMNSIZE = 8;

int main()
{ 
	sf::RenderWindow window(sf::VideoMode(800, 800), "Chess by Marin and Alan");
	window.setFramerateLimit(60);

	Board board(&window);
	Figure figure(&window);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			//cout << Mouse::getPosition(window).x << endl;
		}
		
		board.drawBoard(ROWSIZE, COLLUMNSIZE);
		
		figure.setStartPosition();
		
		window.display();
	}
	return 0;
}
