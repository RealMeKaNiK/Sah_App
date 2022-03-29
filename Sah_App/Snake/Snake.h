#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
class Snake
{
private:
	RenderWindow* window;
	int x = 100;
	int y = 100;
	RectangleShape snakeObject;
	char snakeDirection;
	bool outOfRange = false;

public:
	Snake(RenderWindow* window);
	void moveSnake(char d);
	void continueMoving();
	void drawSnake();
	void checkOutOfBorders();
};

