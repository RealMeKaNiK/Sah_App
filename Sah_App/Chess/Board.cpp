#include "Board.h"
Board::Board(RenderWindow* window)
{
	this->window = window;
	drawMainBoard();
	drawOddRows();
	drawEvenRows();
}

void Board::drawOddRows()
{
	RectangleShape oddRows[16];
	int positionX = 400;
	int positionY = 100;
	for (int i = 0; i < 16; i++)
	{
		oddRows[i].setSize(Vector2f(100.f, 100.f));
		oddRows[i].setFillColor(Color(139, 87, 26));
		oddRows[i].setPosition(positionX, positionY);
		window->draw(oddRows[i]);
		if (positionX == 1000)
		{
			positionX = 400;
			positionY += 200;
			continue;
		}
		else
		{
			positionX += 200;
		}
	}
}

void Board::drawEvenRows()
{
	RectangleShape evenRows[16];
	int positionX1 = 300;
	int positionY1 = 200;
	for (int i = 0; i < 16; i++)
	{
		evenRows[i].setSize(Vector2f(100.f, 100.f));
		evenRows[i].setFillColor(Color(139, 87, 26));
		evenRows[i].setPosition(positionX1, positionY1);
		window->draw(evenRows[i]);
		if (positionX1 == 900)
		{
			positionX1 = 300;
			positionY1 += 200;
			continue;
		}
		else
		{
			positionX1 += 200;
		}
	}
}

void Board::drawMainBoard()
{
	RectangleShape mainBoard(Vector2f(800.f, 800.f));
	mainBoard.setFillColor(Color(229, 150, 60));
	mainBoard.setPosition(300, 100);				//End of board on 1000 x
	window->draw(mainBoard);
}
