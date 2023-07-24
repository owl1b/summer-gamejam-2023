#include <iostream>
#include "config.h"

//Aqu� declaramos la clase y sus m�todos

class Player
{
protected:
	float pos[2];
	float size[2];
	float vel;
	std::string sprite;

public:

	Player();

public:

	void setVel(float vel);
	float getVel();

	void setPos(float X, float Y);
	float* getPos();

	void setSize(float X, float Y);
	float* getSize();
	
	void setSprite(std::string sprite);
	std::string getSprite();
};