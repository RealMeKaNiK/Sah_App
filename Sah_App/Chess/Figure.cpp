#include "Figure.h"

Figure::Figure(RenderWindow* window)
{
	this->window = window;
	setTextures("pijuncrni.png", "kralj.png", "kraljica.png",
		"lovac.png", "skakac.png", "kula.png");
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
;
}

void Figure::setStartPosition()
{
	kulaLijevo.spriteKula.setPosition(30, 25);
	window->draw(kulaLijevo.spriteKula);
	lovacLijevo.spriteLovac.setPosition(130, 25);
	window->draw(lovacLijevo.spriteLovac);
}
