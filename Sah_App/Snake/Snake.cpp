#include "Snake.h"

Snake::Snake(RenderWindow* window)
{
	this->window = window;
	snakeObject.setSize(Vector2f(50.f, 50.f));
	snakeObject.setFillColor(Color::Green);
	//Start Position
	snakeDirection = 'E';
}

void Snake::moveSnake(char d)
{
	if (d == 'W')
	{
		snakeDirection = 'N';
		y -= 10;
	}
	else if (d == 'S')
	{
		snakeDirection = 'S';
		y += 10;
	}
	else if (d == 'A')
	{
		snakeDirection = 'W';
		x -= 10;
	}
	else if (d == 'D')
	{
		snakeDirection = 'E';
		x += 10;
	}
}

void Snake::continueMoving()
{
	if (snakeDirection == 'E')
		x += 10;
	else if (snakeDirection == 'W')
		x -= 10;
	else if (snakeDirection == 'N')
		y -= 10;
	else if (snakeDirection == 'S')
		y += 10;
}

void Snake::drawSnake()
{
	snakeObject.setPosition(x, y);
	window->draw(snakeObject);
	checkOutOfBorders();
}

void Snake::checkOutOfBorders()
{
	if (x > 800)
		x = 0;
	else if (x < 0)
		x = 800;
	else if (y > 800)
		y = 0;
	else if (y < 0)
		y = 800;
}
