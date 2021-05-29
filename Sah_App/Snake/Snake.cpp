#include "Snake.h"

Snake::Snake(RenderWindow* window)
{
	this->window = window;
	x = 100;
	y = 100;
	snakeObject.setSize(Vector2f(50.f, 50.f));
	snakeObject.setFillColor(Color::Green);
	//Start Position
	snakeObject.setPosition(x, y);
	snakeDirection = 'E';
}

void Snake::moveSnake()
{
}

void Snake::continueMoving()
{
	if (snakeDirection == 'E')
	{
		snakeObject.setPosition(x + 10, y);
	}
	else if (snakeDirection == 'W')
	{
		snakeObject.setPosition(x - 10, y);
	}
	else if (snakeDirection == 'N')
	{
		snakeObject.setPosition(x, y - 10);
	}
	else if (snakeDirection == 'S')
	{
		snakeObject.setPosition(x, y + 10);
	}
}

void Snake::drawSnake()
{
	continueMoving();
	window->draw(snakeObject);
}
