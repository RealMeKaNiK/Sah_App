#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

struct Kralj
{
	Texture textureKralj;
	Sprite spriteKralj;
};

struct Kraljica
{
	Texture textureKraljica;
	Sprite spriteKraljica;
};

struct Lovac
{
	Texture textureLovac;
	Sprite spriteLovac;
};

struct Konj
{
	Texture textureKonj;
	Sprite spriteKonj;
};

struct Kula
{
	Texture textureKula;
	Sprite spriteKula;
};

struct Pijun
{
	Texture texturePijun;
	Sprite spritePijun;
};

class Figure
{
private:
	RenderWindow* window;
	Pijun pijuni[8];
	Kralj kralj;
	Kraljica kraljica;
	Lovac lovacLijevo;
	Lovac lovacDesno;
	Konj konjLijevo;
	Konj konjDesno;
	Kula kulaLijevo;
	Kula kulaDesno;

	Texture textureKula;
	Sprite spriteKula;

public:
	Figure(RenderWindow* window);
	void setTextures(string imgDirectoryPijun, string imgDirectoryKralj, string imgDirectoryKraljica, string imgDirectoryLovac, string imgDirectoryKonj,
					 string imgDirectoryKula);
	void setStartPosition();
};

