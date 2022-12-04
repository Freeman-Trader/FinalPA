
#include <SFML/Graphics.hpp>
#include <iostream>

#include "ZVP.h"

//#define WINDOWS_WIDTH 500
//#define WINDOWS_HEIGHT 500
//
//#define MOVEMENT_SPEED .2f

int main()
{
	//ZVP game;

	// game.runGame();

	//unsigned int direction = 0;

	//Window
	sf::VideoMode defaultVM(WINDOWS_WIDTH, 250);
	sf::RenderWindow Window(defaultVM, "Zombies Vs Plants", sf::Style::Default);

	//Title - Currently needs a font .ttf file to work with
	//sf::Font defaultFont;
	//if(!defaultFont.loadFromFile("CrackMan.TTF"))
	//	{return -1;}
	//sf::Text titleName("Zombies Vs Plants", defaultFont, 25);
	//titleName.setColor(sf::Color::Cyan);

	//Button Objects
	bool ableToPlace;
	ableToPlace = false;

	sf::Vector2f ButtonSize;
	ButtonSize.x = 50;
	ButtonSize.y = 50;

	sf::RectangleShape PeaPlantButton;
	PeaPlantButton.setSize(ButtonSize);
	PeaPlantButton.setFillColor(sf::Color::Brown);
	PeaPlantButton.setPosition(0, Window.getSize().y - ButtonSize.y);

	sf::RectangleShape PeaPlant;

	while (Window.isOpen())
	{
		sf::Event event;
		while (Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				Window.close();
			}


			sf::Vector2i mousePos = sf::Mouse::getPosition(Window);
			sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
			if (PeaPlantButton.getGlobalBounds().contains(mousePosF) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) //if button is clicked
			{
				ableToPlace = true;
				std::cout << "Button is Pressed" << std::endl;
			}

			if (sf::Mouse::isButtonPressed(sf::Mouse::Right) && ableToPlace == true)//place plant 
			{
				//sf::RectangleShape Plant;

				sf::Vector2f PeaPlantSize;
				PeaPlantSize.x = 20;
				PeaPlantSize.y = 20;

				PeaPlant.setSize(PeaPlantSize);
				PeaPlant.setFillColor(sf::Color::Brown);
				sf::Vector2i mousePos = sf::Mouse::getPosition(Window);
				sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
				PeaPlant.setPosition(mousePosF);

				//Window.draw(Plant);
				//Window.display();

				ableToPlace = false;
				std::cout << "Plant is Placed" << std::endl;
			}
			
		
			
			Window.clear(sf::Color::Green); //set background color to green
			Window.draw(PeaPlantButton);
			Window.draw(PeaPlant);
			//Window.draw(titleName);
			Window.display();
		}
	}

	return 0;
}