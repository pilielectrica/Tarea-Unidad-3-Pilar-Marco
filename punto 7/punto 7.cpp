#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
///Punto de entrada a la aplicación///
using namespace std;
Sprite puntorojo1;
Sprite puntorojo2;
Sprite puntorojo3;
Sprite puntorojo4;
Sprite puntoazul;
Texture texture;
Texture textureazul;
///Punto de entrada a la aplicación///
int main() {
	//Cargamos la textura del archivo
	texture.loadFromFile("rcircle.png");
	textureazul.loadFromFile("puntoazul.png");
	//Cargamos el material del sprite
	puntorojo1.setTexture(texture);
	puntorojo2.setTexture(texture);
	puntorojo3.setTexture(texture);
	puntorojo4.setTexture(texture);
	puntoazul.setTexture(textureazul);
	//Movemos el sprite
	puntorojo2.setPosition(675, 0);
	puntorojo3.setPosition(675, 480);
	puntorojo4.setPosition(0, 480);
	puntoazul.setScale(0.2f, 0.2f);
	puntoazul.setPosition(350, 255);
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(puntorojo1);
		App.draw(puntorojo2);
		App.draw(puntorojo3);
		App.draw(puntorojo4);
		App.draw(puntoazul);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}
