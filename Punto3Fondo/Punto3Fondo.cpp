#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
///Punto de entrada a la aplicación///
using namespace std;
Sprite fondo;
Texture texturefondo;
///Punto de entrada a la aplicación///
int main() {
	//Cargamos la textura del archivo
	texturefondo.loadFromFile("fondo.jpg");
	//Cargamos el material del sprite
	fondo.setTexture(texturefondo);
	//Movemos el sprite
	fondo.setPosition(0, 0);
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(fondo);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}