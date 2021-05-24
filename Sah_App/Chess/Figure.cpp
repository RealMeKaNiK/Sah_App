#include "Figure.h"

Figure::Figure(RenderWindow* window)
{

	this->window = window;
	setFigureOriginPoint();
}



void Figure::setPosition(bool gameStart)
{
	//ODVOJITI CRTANJE OD INIT POSITCIJE

	kulaLijevoBijeli.spriteKula.setPosition(50, 50);
	konjLijevoBijeli.spriteKonj.setPosition(150, 50);
	lovacLijevoBijeli.spriteLovac.setPosition(250, 50);
	kraljBijeli.spriteKralj.setPosition(350, 50);
	kraljicaBijeli.spriteKraljica.setPosition(450, 50);
	lovacDesnoBijeli.spriteLovac.setPosition(550, 50);
	konjDesnoBijeli.spriteKonj.setPosition(650, 50);
	kulaDesnoBijeli.spriteKula.setPosition(750, 50);
	int x = 50;
	for (unsigned i = 0; i < 8; i++)
	{
		pijuniBijeli[i].spritePijun.setPosition(x, 150);
		x += 100;
	}
}

Vector2f Figure::figureOriginPoint(float x, float y)
{
	return Vector2f(x, y);
}

void Figure::setFigureOriginPoint()
{
	kulaLijevoBijeli.spriteKula.setOrigin(figureOriginPoint(22.5f, 22.5f));
	kulaDesnoBijeli.spriteKula.setOrigin(figureOriginPoint(22.5f, 22.5f));

	konjLijevoBijeli.spriteKonj.setOrigin(figureOriginPoint(22.5f, 22.5f));
	konjDesnoBijeli.spriteKonj.setOrigin(figureOriginPoint(22.5f, 22.5f));

	lovacLijevoBijeli.spriteLovac.setOrigin(figureOriginPoint(22.5f, 22.5f));
	lovacDesnoBijeli.spriteLovac.setOrigin(figureOriginPoint(22.5f, 22.5f));

	kraljBijeli.spriteKralj.setOrigin(figureOriginPoint(22.5f, 22.5f));
	kraljicaBijeli.spriteKraljica.setOrigin(figureOriginPoint(22.5f, 22.5f));

	for (unsigned i = 0; i < 8; i++)
	{
		pijuniBijeli[i].spritePijun.setOrigin(figureOriginPoint(22.5f, 22.5f));
	}
}

void Figure::drawFigures()
{
	window->draw(kraljBijeli.spriteKralj);
	window->draw(kraljicaBijeli.spriteKraljica);
	window->draw(lovacLijevoBijeli.spriteLovac);
	window->draw(lovacDesnoBijeli.spriteLovac);
	window->draw(konjLijevoBijeli.spriteKonj);
	window->draw(konjDesnoBijeli.spriteKonj);
	window->draw(kulaLijevoBijeli.spriteKula);
	window->draw(kulaDesnoBijeli.spriteKula);
	for (unsigned i = 0; i < 8; i++)
	{
		window->draw(pijuniBijeli[i].spritePijun);
	}

}


