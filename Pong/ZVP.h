
#include <SFML/Graphics.hpp>

#define WINDOWS_WIDTH 500
#define WINDOWS_HEIGHT 500

#define MOVEMENT_SPEED .2f

typedef enum status
{
	dead, alive
}Status;

class ZVP
{
public:
	ZVP()
	{
		points = 100;
		gameStatus = alive;
	}
	void runGame();

private:
	int points;
	Status gameStatus;
};
