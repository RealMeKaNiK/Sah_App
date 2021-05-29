#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
class Snake
{
private:
	RenderWindow* window;
	int x;
	int y;
	RectangleShape snakeObject;
	char snakeDirection;

public:
	Snake(RenderWindow* window);
	void moveSnake();
	void continueMoving();
	void drawSnake();
};

