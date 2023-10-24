#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

Sprite plataforma1;
Sprite plataforma2;
Sprite plataforma3;
Sprite plataforma4;
Sprite plataforma5;
Sprite plataforma6;
Sprite plataforma7;
Sprite plataforma8;
Texture texturePlataforma;

int main() {

	texturePlataforma.loadFromFile("plataforma.jpg");
	


	
;

	RenderWindow App(sf::VideoMode(800, 800, 32),
		"Que ventana horrible");

	while (App.isOpen()) {


		
				plataforma1.setTexture(texturePlataforma);
				plataforma2.setTexture(texturePlataforma);
				plataforma3.setTexture(texturePlataforma);
				plataforma4.setTexture(texturePlataforma);
				plataforma5.setTexture(texturePlataforma);
				plataforma6.setTexture(texturePlataforma);
				plataforma1.setScale(0.3, 1.2);
				plataforma2.setScale(0.3, 2.5);
				plataforma3.setScale(0.3, 2.5);
				plataforma4.setScale(0.3, 2.5);
				plataforma5.setScale(0.3, 2.5);
				plataforma6.setScale(1.2, 0.3);
				plataforma1.setPosition(0,600);
				plataforma2.setPosition(100,500);
				plataforma3.setPosition(200,400);
				plataforma4.setPosition(300, 300);
				plataforma5.setPosition(400, 200);
				plataforma6.setPosition(500, 200);
				App.draw(plataforma1);
				App.draw(plataforma1);
				App.draw(plataforma2);
				App.draw(plataforma3);
				App.draw(plataforma4);
				App.draw(plataforma5);
				App.draw(plataforma6);
		
		App.display();
	}
	return 0;
}