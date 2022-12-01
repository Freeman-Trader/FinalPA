
#include <SFML/Graphics.hpp>
#include <string>

#pragma once

class BasePlantClass
{
private:
	std::string mName;
	int mHealth;
	unsigned int mDamage;
	float mXPosition;
	float mYPosition;
	sf::Texture mPlantTexture;
	sf::Sprite mPlantSprite;

public:
	BasePlantClass();
	BasePlantClass(std::string const nName, int const nHealth, unsigned int const nDamage,
		float const nXPosition, float const nYPosition,
		sf::Texture const nPlantTexture, sf::Sprite const nPlantSprite);
	~BasePlantClass();

	//Setters
	void setName(std::string const nName);
	void setHealth(int const nHealth);
	void setDamage(unsigned int const nDamage);
	void setXPosition(float const nXPosition);
	void setYPosition(float const nYPosition);
	void setPlantTexture(sf::Texture const nPlantTexture);
	void setPlantSprite(sf::Sprite const nPlantSprite);

	//Getters
	std::string getName(void) const;
	int getHealth(void) const;
	unsigned int getDamage(void) const;
	float getXPosition(void) const;
	float getYPosition(void) const;
	sf::Texture getPlantTexture(void) const;
	sf::Sprite getPlantSprite(void) const;



};

BasePlantClass::BasePlantClass()
{
}

BasePlantClass::~BasePlantClass()
{
}