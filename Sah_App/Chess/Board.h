#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
class Board
{
private:
	RenderWindow* window;
	RectangleShape boardSquares[8][8];
public:
	Board();
	Board(RenderWindow* window);
	void initBoard(int boardRow, int boardCollumn);
	void drawBoard(int boardRow, int boardCollumn);
};

