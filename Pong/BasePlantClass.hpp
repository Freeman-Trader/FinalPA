
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
		unsigned int const nDamage, unsigned int const nFireRate, float const nXPosition,
		float const nYPosition, sf::Texture const nPlantTexture, sf::Sprite const nPlantSprite);
	~BasePlantClass();

	//Setters
	void setName(std::string const nName);
	void setHealth(int const nHealth);
	void setPassive(bool const nPassive);
	void setDamage(unsigned int const nDamage);
	void setFireRate(unsigned int const nFireRate);
	void setXPosition(float const nXPosition);
	void setYPosition(float const nYPosition);
	void setPlantTexture(sf::Texture const nPlantTexture);
	void setPlantSprite(sf::Sprite const nPlantSprite);

	//Getters
	std::string getName(void) const;
	int getHealth(void) const;
	bool getPassive(void) const;
	unsigned int getDamage(void) const;
	unsigned int getFireRate(void) const;
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
}

BasePlantClass::~BasePlantClass()
{
}