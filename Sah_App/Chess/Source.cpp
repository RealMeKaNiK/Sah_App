#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

int main()
{
	std::cout << "radim konflikt";
	std::cout << "alaneeeeeeeeee";
	cout << "marineeee";
	sf::RenderWindow window(sf::VideoMode(1200, 800), "Hello, SFML world!");
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
