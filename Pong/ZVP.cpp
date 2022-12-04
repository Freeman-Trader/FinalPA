
#include "ZVP.h"

void ZVP::runGame()
{
	int timeInt = 0;
	sf::Clock clock;
	sf::Time time;

	sf::VideoMode defaultVM(WINDOWS_WIDTH, WINDOWS_HEIGHT);
	sf::RenderWindow Window(defaultVM, "Zombies Vs Plants", sf::Style::Default);

	while (gameStatus == alive && Window.isOpen()) // can add in a time constraint like clock.getElapsedTime().asSeconds() < 900 (15 min)
	{
		time = clock.getElapsedTime();
		timeInt = time.asMilliseconds();

		// adds 25 points every 20 seconds
		// amount of time may need to be changed
		// wasn't sure how to display to the screen and when I tried, I couldn't access the .TTF 
		// files for some reason
		if (timeInt % 20000 == 0)
		{
			points += 25;
		}

		sf::Event event;
		while (Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				Window.close();
		}

		// Mouse

		// set mouse position relative to window
		sf::Mouse::setPosition(sf::Vector2i(100, 200), Window);

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			// left click
			// could be how to place the last plant type pressed
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
		{
			// right click
			// could be how to remove a plant
		}

		// gets mouse position
		// will need to be used to place/remove plants
		sf::Vector2i position = sf::Mouse::getPosition(Window);
		

		Window.clear();
		// Window.draw(); 
		Window.display();
		

		// function for when a zombie crosses the edge of the board
		// gameStatus = dead;
	}
}