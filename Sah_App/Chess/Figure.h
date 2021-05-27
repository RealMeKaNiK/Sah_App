#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

struct Kralj
{
	Texture textureKralj;
	Sprite spriteKralj;
	void initImg(string color);
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
	Pijun pijuniBijeli[8];
	Kralj kraljBijeli;

	Kraljica kraljicaBijeli;
	
	Lovac lovacLijevoBijeli;
	Lovac lovacDesnoBijeli;
	
	Konj konjLijevoBijeli;
	Konj konjDesnoBijeli;
	
	Kula kulaLijevoBijeli;
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

