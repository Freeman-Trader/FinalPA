
#include <SFML/Graphics.hpp>
#include <string>

#pragma once

class BasePlantClass
{
private:
	std::string mName;
	int mHealth;
	bool mPassive;
	float mXVelocity;
	//unsigned int mDamage; //For class that inherits this class
	//unsigned int mFireRate;
	float mXPosition;
	float mYPosition;
	sf::Texture mPlantTexture;
	sf::Sprite mPlantSprite;

public:
	BasePlantClass();
	BasePlantClass(std::string const nName, int const nHealth, bool const nPassive, float nXVelocity,
		float const nXPosition, float const nYPosition, sf::Texture const nPlantTexture,
		sf::Sprite const nPlantSprite);
	~BasePlantClass();

	//Setters
	void setName(std::string const nName);
	void setHealth(int const nHealth);
	void setPassive(bool const nPassive);
	void setXVelocity(float const mXVelocity);
	//void setDamage(unsigned int const nDamage);
	//void setFireRate(unsigned int const nFireRate);
	void setXPosition(float const nXPosition);
	void setYPosition(float const nYPosition);
	void setPlantTexture(sf::Texture const nPlantTexture);
	void setPlantSprite(sf::Sprite const nPlantSprite);

	//Getters
	std::string getName(void) const;
	int getHealth(void) const;
	bool getPassive(void) const;
	float getXVelocity(void) const;
	//unsigned int getDamage(void) const;
	//unsigned int getFireRate(void) const;
	float getXPosition(void) const;
	float getYPosition(void) const;
	sf::Texture getPlantTexture(void) const;
	sf::Sprite getPlantSprite(void) const;

	//Functions
	//virtual bool checkFire(void) = 0; Might be in certain class
	//virtual void firePod(void) = 0;
	//virtual void checkAlive(void) = 0;
	void checkCollsion(void);
	void movePlant(void);

};

BasePlantClass::BasePlantClass()
{
	this->mName = '\0';
	this->mHealth = 0;
	this->mPassive = false;
	this->mXVelocity = 0.f;
	this->mXPosition = 0.f;
	this->mYPosition = 0.f;
	this->mPlantTexture;
	this->mPlantSprite;
}

BasePlantClass::BasePlantClass(std::string const nName, int const nHealth, bool const nPassive,
	float nXVelocity, float const nXPosition, float const nYPosition, sf::Texture const nPlantTexture,
	sf::Sprite const nPlantSprite)
{
	this->mName = nName;
	this->mHealth = nHealth;
	this->mPassive = nPassive;
	this->mXVelocity = nXVelocity;
	this->mXPosition = nXPosition;
	this->mYPosition = nYPosition;
	this->mPlantTexture = nPlantTexture;
	this->mPlantSprite = nPlantSprite;
}

BasePlantClass::~BasePlantClass()
{

}



void BasePlantClass::setName(std::string const nName)
{
	this->mName = nName;
}
void BasePlantClass::setHealth(int const nHealth)
{
	this->mHealth = nHealth;
}
void BasePlantClass::setPassive(bool const nPassive)
{
	this->mPassive = nPassive;
}
void BasePlantClass::setXVelocity(float const mXVelocity)
{
	this->mXVelocity = mXVelocity;
}
void BasePlantClass::setXPosition(float const nXPosition)
{
	this->mXPosition = nXPosition;
}
void BasePlantClass::setYPosition(float const nYPosition)
{
	this->mYPosition = nYPosition;
}
void BasePlantClass::setPlantTexture(sf::Texture const nPlantTexture)
{
	this->mPlantTexture = nPlantTexture;
}
void BasePlantClass::setPlantSprite(sf::Sprite const nPlantSprite)
{
	this->mPlantSprite = nPlantSprite;
}



std::string BasePlantClass::getName(void) const 
{
	return this->mName;
}
int BasePlantClass::getHealth(void) const
{
	return this->mHealth;
}
bool BasePlantClass::getPassive(void) const
{
	return this->mPassive;
}
float BasePlantClass::getXVelocity(void) const
{
	return this->mXVelocity;
}
float BasePlantClass::getXPosition(void) const
{
	return this->mXPosition;
}
float BasePlantClass::getYPosition(void) const
{
	return this->mYPosition;
}
sf::Texture BasePlantClass::getPlantTexture(void) const
{
	return this->mPlantTexture;
}
sf::Sprite BasePlantClass::getPlantSprite(void) const
{
	return this->mPlantSprite;
}



void BasePlantClass::movePlant(void)
{
	this->mXPosition = +this->mXVelocity;
}