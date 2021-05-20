#include "Board.h"
Board::Board()
{
	//default constructor
}
Board::Board(RenderWindow* window)
{
	this->window = window;
	initBoard(8, 8);
}

void Board::initBoard(int boardRow, int boardCollumn)
{
	int squareX = 0;
	int squareY = 0;
	for (int i = 0; i < boardCollumn; i++)
	{
		for (int j = 0; j < boardRow; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
				{
					boardSquares[i][j].setSize(Vector2f(100.f, 100.f));
					boardSquares[i][j].setFillColor(Color(229, 150, 60));
					boardSquares[i][j].setPosition(squareX, squareY);
					squareX += 100;
				}
				else
				{
					boardSquares[i][j].setSize(Vector2f(100.f, 100.f));
					boardSquares[i][j].setFillColor(Color(139, 87, 26));
					boardSquares[i][j].setPosition(squareX, squareY);
					squareX += 100;
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					boardSquares[i][j].setSize(Vector2f(100.f, 100.f));
					boardSquares[i][j].setFillColor(Color(139, 87, 26));
					boardSquares[i][j].setPosition(squareX, squareY);
					squareX += 100;
				}
				else
				{
					boardSquares[i][j].setSize(Vector2f(100.f, 100.f));
					boardSquares[i][j].setFillColor(Color(229, 150, 60));
					boardSquares[i][j].setPosition(squareX, squareY);
					squareX += 100;
				}
			}
		}
		squareY += 100;
		squareX = 0;
	}
}

void Board::drawBoard(int boardRow, int boardCollumn)
{
	for (int i = 0; i < boardCollumn; i++)
	{
		for (int j = 0; j < boardRow; j++)
		{
			window->draw(boardSquares[i][j]);
		}
	}
}

