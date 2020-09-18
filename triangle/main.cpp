#include <SFML/Graphics.hpp>

int main ()
{	
	sf::RenderWindow window (sf::VideoMode(800, 600), "triangle");
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Black);
		
		sf::CircleShape triangle (80, 3);
		triangle.setFillColor( sf::Color(100, 250, 50) );
		
		window.draw( triangle );
		window.display();
	}

	return 0;
}
