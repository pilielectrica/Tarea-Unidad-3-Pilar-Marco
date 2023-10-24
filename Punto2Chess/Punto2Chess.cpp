#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

Sprite cuadrado;
Texture textureb;
Texture texturew;

int main() {
	
	textureb.loadFromFile("chessb.png");
	texturew.loadFromFile("chessw.png");
	
	
	cuadrado.setScale(0.78125, 0.78125);
	
	int xw = 0; int yw = 0; int xb = 100; int yb = 0;
	
	RenderWindow App(sf::VideoMode(800, 800, 32),
		"Que ventana horrible");
	
	while (App.isOpen()) {
		
		
		for (int j = 0; j < 8; j++) 
		{
			for (int i = 0; i < 8; i++)
			{
				cuadrado.setTexture((i + j) % 2 == 0 ? texturew : textureb);
				cuadrado.setPosition(i * 100, j * 100);
				App.draw(cuadrado);
			}
		}
		
		App.display();
	}
	return 0;
}