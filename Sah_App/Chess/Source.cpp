#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

int main()
{
	cout << "marin je gay haha";
	cout << "marin je gejkoooooooooooooooooooooooooo mejkoooooooooooooo";
	cout << "Marin je jhoisve";
	cout << "Bok marineeeeee kako sii";
	cout << "alaneeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	cout << "test";
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
