#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

struct Kralj
{
	Texture textureKralj;
	Sprite spriteKralj;
	Kralj()
	{
		textureKralj.loadFromFile("kralj.png");
		spriteKralj.setTexture(textureKralj);
	}
};

struct Kraljica
{
	Texture textureKraljica;
	Sprite spriteKraljica;
	Kraljica()
	{
		textureKraljica.loadFromFile("kraljica.png");
		spriteKraljica.setTexture(textureKraljica);
	}
};

struct Lovac
{
	Texture textureLovac;
	Sprite spriteLovac;
	Lovac()
	{
		textureLovac.loadFromFile("lovac.png");
		spriteLovac.setTexture(textureLovac);
	}
};

struct Konj
{
	Texture textureKonj;
	Sprite spriteKonj;
	Konj()
	{
		textureKonj.loadFromFile("skakac.png");
		spriteKonj.setTexture(textureKonj);
	}
};

struct Kula
{
	Texture textureKula;
	Sprite spriteKula;
	Kula(string imgDir)
	{
		textureKula.loadFromFile(imgDir);
		spriteKula.setTexture(textureKula);
	}
};

struct Pijun
{
	Texture texturePijun;
	Sprite spritePijun;
	Pijun(string imgDir)
	{
		texturePijun.loadFromFile(imgDir);
		spritePijun.setTexture(texturePijun);
	}
};

class Figure
{
private:
	RenderWindow* window;
	Pijun pijuniBijeli[8];
	Kralj kraljBijeli;
	Kraljica kraljicaBijeli;
	Lovac lovacLijevoBijeli;
	Lovac lovacDesnoBijeli;
	Konj konjLijevoBijeli;
	Konj konjDesnoBijeli;
	Kula kulaLijevoBijeli();
	Kula kulaDesnoBijeli;

	Texture textureKula;
	Sprite spriteKula;

public:
	Figure(RenderWindow* window);
	void setPosition(bool gameStart);
	Vector2f figureOriginPoint(float x, float y);
	void setFigureOriginPoint();
	void drawFigures();
};

