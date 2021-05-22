#include "Figure.h"

Figure::Figure(RenderWindow* window)
{
	this->window = window;
	setTextures("pijuncrni.png", "kralj.png", "kraljica.png",
		"lovac.png", "skakac.png", "kula.png");
	setFigureOriginPoint();
}

void Figure::setTextures(string imgDirectoryPijun, string imgDirectoryKralj, string imgDirectoryKraljica,
						 string imgDirectoryLovac, string imgDirectoryKonj, string imgDirectoryKula)
{
	kralj.textureKralj.loadFromFile(imgDirectoryKralj);
	kraljica.textureKraljica.loadFromFile(imgDirectoryKraljica);
	lovacLijevo.textureLovac.loadFromFile(imgDirectoryLovac);
	lovacDesno.textureLovac.loadFromFile(imgDirectoryLovac);
	konjLijevo.textureKonj.loadFromFile(imgDirectoryKonj);
	konjDesno.textureKonj.loadFromFile(imgDirectoryKonj);
	kulaLijevo.textureKula.loadFromFile(imgDirectoryKula);
	kulaDesno.textureKula.loadFromFile(imgDirectoryKula);

	kralj.spriteKralj.setTexture(kralj.textureKralj);
	kraljica.spriteKraljica.setTexture(kraljica.textureKraljica);
	lovacLijevo.spriteLovac.setTexture(lovacLijevo.textureLovac);
	lovacDesno.spriteLovac.setTexture(lovacDesno.textureLovac);
	konjLijevo.spriteKonj.setTexture(konjLijevo.textureKonj);
	konjDesno.spriteKonj.setTexture(konjDesno.textureKonj);
	kulaLijevo.spriteKula.setTexture(kulaLijevo.textureKula);
	kulaDesno.spriteKula.setTexture(kulaDesno.textureKula);

	for (unsigned i = 0; i < 8; i++)
	{
		pijuni[i].texturePijun.loadFromFile(imgDirectoryPijun);
		pijuni[i].spritePijun.setTexture(pijuni[i].texturePijun);
	}

}

void Figure::setStartPosition()
{
	//ODVOJITI CRTANJE OD INIT POSITCIJE

	kulaLijevo.spriteKula.setPosition(50, 50);
	window->draw(kulaLijevo.spriteKula);

	konjLijevo.spriteKonj.setPosition(150, 50);
	window->draw(konjLijevo.spriteKonj);

	lovacLijevo.spriteLovac.setPosition(250, 50);
	window->draw(lovacLijevo.spriteLovac);

	kralj.spriteKralj.setPosition(350, 50);
	window->draw(kralj.spriteKralj);

	kraljica.spriteKraljica.setPosition(450, 50);
	window->draw(kraljica.spriteKraljica);

	lovacDesno.spriteLovac.setPosition(550, 50);
	window->draw(lovacDesno.spriteLovac);

	konjDesno.spriteKonj.setPosition(650, 50);
	window->draw(konjDesno.spriteKonj);

	kulaDesno.spriteKula.setPosition(750, 50);
	window->draw(kulaDesno.spriteKula);

	int x = 50;
	for (unsigned i = 0; i < 8; i++)
	{
		pijuni[i].spritePijun.setPosition(x, 150);
		x += 100;
		window->draw(pijuni[i].spritePijun);
	}
}

Vector2f Figure::figureOriginPoint(float x, float y)
{
	return Vector2f(x, y);
}

void Figure::setFigureOriginPoint()
{
	kulaLijevo.spriteKula.setOrigin(figureOriginPoint(22.5f, 22.5f));
	kulaDesno.spriteKula.setOrigin(figureOriginPoint(22.5f, 22.5f));

	konjLijevo.spriteKonj.setOrigin(figureOriginPoint(22.5f, 22.5f));
	konjDesno.spriteKonj.setOrigin(figureOriginPoint(22.5f, 22.5f));

	lovacLijevo.spriteLovac.setOrigin(figureOriginPoint(22.5f, 22.5f));
	lovacDesno.spriteLovac.setOrigin(figureOriginPoint(22.5f, 22.5f));

	kralj.spriteKralj.setOrigin(figureOriginPoint(22.5f, 22.5f));
	kraljica.spriteKraljica.setOrigin(figureOriginPoint(22.5f, 22.5f));

	for (unsigned i = 0; i < 8; i++)
	{
		pijuni[i].spritePijun.setOrigin(figureOriginPoint(22.5f, 22.5f));
	}
}
