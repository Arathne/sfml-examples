#include <SFML/System/Clock.hpp>
#include <iostream>

int main ()
{
	sf::Clock clock;
	
	bool run = true;
	while (run)
	{
		float seconds = clock.getElapsedTime().asSeconds();
		std::cout << seconds << std::endl;

		if (seconds >= 5)
			run = false;
	}
	
	return 0;
}
