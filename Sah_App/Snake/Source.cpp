#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Snake");
	window.setFramerateLimit(60);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.display();
	}
	return 0;
}