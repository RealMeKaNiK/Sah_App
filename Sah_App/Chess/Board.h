#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
class Board
{
private:
	RenderWindow* window;
public:
	Board(RenderWindow* window);
	void drawOddRows();
	void drawEvenRows();
	void drawMainBoard();
};

