
#include <SFML/Graphics.hpp>

#define WINDOWS_WIDTH 500
#define WINDOWS_HEIGHT 500

#define MOVEMENT_SPEED .2f

int main()
{
	unsigned int direction = 0;

	//Window
	sf::VideoMode defaultVM(WINDOWS_WIDTH, WINDOWS_HEIGHT);
	sf::RenderWindow Window(defaultVM, "Zombies Vs Plants", sf::Style::Default);


	//Title - Currently needs a font .ttf file to work with
	sf::Font defaultFont;
	if(!defaultFont.loadFromFile("CrackMan.TTF"))
		{return -1;}
	sf::Text titleName("Zombies Vs Plants", defaultFont, 25);
	titleName.setColor(sf::Color::Cyan);
	

	//Pacman Object
	sf::CircleShape shape;
	shape.setRadius(50.f);
	shape.setOutlineThickness(5.f);
	shape.setFillColor(sf::Color::Yellow);
	shape.setOutlineColor(sf::Color::Red);

	//For Sprites
	/*sf::Texture PacManTexture;
	if (!PacManTexture.loadFromFile("pacman-png.png"))
	{
		return 1;
	}
	sf::Sprite PacManSprite;
	PacManSprite.setTexture(PacManTexture);*/

	//Button Objects
	sf::Vector2f ButtonSize;
	ButtonSize.x = 50;
	ButtonSize.y = 50;

	sf::RectangleShape PlantButton;
	PlantButton.setSize(ButtonSize);
	PlantButton.setFillColor(sf::Color::White);
	PlantButton.setPosition(0, Window.getSize().y - ButtonSize.y);

	while (Window.isOpen())
	{
		sf::Event event;
		while (Window.pollEvent(event))
		{
			/*if (event.type == sf::Event::Closed)
				Window.close();*/

			switch (Event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W):
				direction = 1;
				break;
			case sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D):
				direction = 2;
				break;
			case sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S):
				direction = 3;
				break;
			case sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A):
				direction = 4;
				break;

			}

			switch (direction)
			{
			case 1: shape.move(0.f, -MOVEMENT_SPEED);
				break;
			case 2: shape.move(MOVEMENT_SPEED, 0.f);
				break;
			case 3: shape.move(0.f, MOVEMENT_SPEED);
				break;
			case 4: shape.move(-MOVEMENT_SPEED, 0.f);
				break;
			default:
				break;
			}
		
		}

		/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			direction = 1;
		}*/
		/*else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			direction = 2;
		}*/
		/*else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			direction = 3;
		}*/
		/*else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			direction = 4;
		}*/
		

		/*switch (direction)
		{
		case 1: shape.move(0.f, -MOVEMENT_SPEED);
			break;
		case 2: shape.move(MOVEMENT_SPEED, 0.f);
			break;
		case 3: shape.move(0.f, MOVEMENT_SPEED);
			break;
		case 4: shape.move(-MOVEMENT_SPEED, 0.f);
			break;
		default:
			break;
		}*/

		Window.clear(sf::Color::Green); //set background color to green
		Window.draw(PlantButton);
		Window.draw(titleName);
		//Window.draw(PacManSprite);
		Window.draw(shape);
		Window.display();
	}

	return 0;
}