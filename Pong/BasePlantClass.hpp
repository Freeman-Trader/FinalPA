
#include <SFML/Graphics.hpp>
#include <string>

#pragma once

class BasePlantClass
{
private:
	std::string mName;
	int mHealth;
	bool mPassive;
	//unsigned int mDamage; //For class that inherits this class
	//unsigned int mFireRate;
	float mXPosition;
	float mYPosition;
	sf::Texture mPlantTexture;
	sf::Sprite mPlantSprite;

public:
	BasePlantClass();
	BasePlantClass(std::string const nName, int const nHealth, bool const nPassive, 
		float const nXPosition, float const nYPosition, sf::Texture const nPlantTexture,
		sf::Sprite const nPlantSprite);
	~BasePlantClass();

	//Setters
	void setName(std::string const nName);
	void setHealth(int const nHealth);
	void setPassive(bool const nPassive);
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
	//unsigned int getDamage(void) const;
	//unsigned int getFireRate(void) const;
	float getXPosition(void) const;
	float getYPosition(void) const;
	sf::Texture getPlantTexture(void) const;
	sf::Sprite getPlantSprite(void) const;

	//Functions
	//virtual bool checkFire(void) = 0; Might be in certain class
	//virtual void firePod(void) = 0;
	virtual void checkAlive(void) = 0;

};

BasePlantClass::BasePlantClass()
{
	this->mName = '\0';
	this->mHealth = 0;
	this->mPassive = false;
	this->mXPosition = 0.f;
	this->mYPosition = 0.f;
	this->mPlantTexture;
	this->mPlantSprite;
}

BasePlantClass::BasePlantClass(std::string const nName, int const nHealth, bool const nPassive,
	float const nXPosition, float const nYPosition, sf::Texture const nPlantTexture,
	sf::Sprite const nPlantSprite)
{
	this->mName = nName;
	this->mHealth = nHealth;
	this->mPassive = nPassive;
	this->mXPosition = nXPosition;
	this->mYPosition = mYPosition;
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

}