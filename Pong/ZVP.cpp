
#include "ZVP.h"

void ZVP::runGame()
{
	int i = 0;
	int timeInt = 0;
	sf::Time time;

	sf::RectangleShape Walnuts[5]; //update with walnut class

	sf::VideoMode defaultVM(WINDOWS_WIDTH, WINDOWS_HEIGHT);
	sf::RenderWindow Window(defaultVM, "Zombies Vs Plants", sf::Style::Default);

	while (gameStatus == alive && Window.isOpen()) // can add in a time constraint like clock.getElapsedTime().asSeconds() < 900 (15 min)
	{
		time = clock.getElapsedTime();
		timeInt = time.asMilliseconds();
		if(timeInt == 300000)
		{
			gameStatus = won;
		}

		//sf::Event event;
		//while (Window.pollEvent(event))
		//{
		//	if (event.type == sf::Event::Closed)
		//		Window.close();
		//}

		sf::Event event;
		while (Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				Window.close();
			}

			//Place Walnuts
			if (sf::Mouse::isButtonPressed(sf::Mouse::Right))//place walnut 
			{
				sf::Vector2f WalnutSize;
				WalnutSize.x = 20;
				WalnutSize.y = 20;

				Walnuts[numWalnuts].setSize(WalnutSize);
				Walnuts[numWalnuts].setFillColor(sf::Color::Brown);

				sf::Vector2i mousePos = sf::Mouse::getPosition(Window);
				sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
				Walnuts[numWalnuts].setPosition(mousePosF);

				std::cout << "Walnut is Placed" << std::endl;
			}
			
		
			
			Window.clear(sf::Color::Green); //set background color to green
			for(i = 0; i < numWalnuts; i ++)
			{
				Window.draw(Walnuts[i]);
			}
			//Window.draw(titleName);
			Window.display();
		}
	}
}

void PVZ::genWalnutTime()
{
	walnutTimer = rand() % 20000;
}