
#include <SFML/Graphics.hpp>
#include <time.h>

#define WINDOWS_WIDTH 500
#define WINDOWS_HEIGHT 500

#define MOVEMENT_SPEED .2f

typedef enum status
{
	dead, alive, won
}Status;

class ZVP
{
public:
	ZVP()
	{
		numWalnuts = 3;
		walnutTimer = 0;
		gameStatus = alive;
	}
	void runGame();
	void genWalnutTime();

private:
	int numWalnuts;
	int walnutTimer;
	sf::Clock clock;
	Status gameStatus;
};
