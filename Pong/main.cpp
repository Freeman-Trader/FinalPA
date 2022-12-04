
#include <SFML/Graphics.hpp>
#include <iostream>

#include "ZVP.h"

//#define WINDOWS_WIDTH 500
//#define WINDOWS_HEIGHT 500
//
//#define MOVEMENT_SPEED .2f

int main()
{
	srand((unsigned int)time(NULL));
	ZVP game;
	//int i = 0;
	game.runGame();

	//unsigned int direction = 0;

	//Window
	//sf::VideoMode defaultVM(WINDOWS_WIDTH, 250);
	//sf::RenderWindow Window(defaultVM, "Zombies Vs Plants", sf::Style::Default);

	//Title - Currently needs a font .ttf file to work with
	//sf::Font defaultFont;
	//if(!defaultFont.loadFromFile("CrackMan.TTF"))
	//	{return -1;}
	//sf::Text titleName("Zombies Vs Plants", defaultFont, 25);
	//titleName.setColor(sf::Color::Cyan);

	//sf::RectangleShape Walnuts[5]; //update with walnut class

	//while (Window.isOpen())
	//{
	//	sf::Event event;
	//	while (Window.pollEvent(event))
	//	{
	//		if (event.type == sf::Event::Closed)
	//		{
	//			Window.close();
	//		}

	//		//Place Walnuts
	//		if (sf::Mouse::isButtonPressed(sf::Mouse::Right))//place walnut 
	//		{
	//			sf::Vector2f WalnutSize;
	//			WalnutSize.x = 20;
	//			WalnutSize.y = 20;

	//			Walnuts[game.numWalnuts].setSize(WalnutSize);
	//			Walnuts[game.numWalnuts].setFillColor(sf::Color::Brown);

	//			sf::Vector2i mousePos = sf::Mouse::getPosition(Window);
	//			sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
	//			Walnuts[game.numWalnuts].setPosition(mousePosF);

	//			std::cout << "Walnut is Placed" << std::endl;
	//		}
			
		
			
	//		Window.clear(sf::Color::Green); //set background color to green
	//		for(i = 0; i < game.numWalnuts; i ++)
	//		{
	//			Window.draw(Walnuts[i]);
	//		}
	//		//Window.draw(titleName);
	//		Window.display();
	//	}
	//}

	return 0;
}