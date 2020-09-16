#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

int main ()
{
	sf::FileInputStream stream;
	stream.open(EPIC_FACE);

	sf::Texture texture;
	texture.loadFromStream(stream);
	
	sf::Sprite sprite (texture);
	sprite.setScale( 0.5f, 0.5f );
	sprite.setPosition( 10.0f, 10.0f );
	
	sf::RenderWindow window ( sf::VideoMode(800,600), "Stream" );

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear( sf::Color::Black );
		window.draw( sprite );
		window.display();
	}

	return 0;
}
