#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

Sprite cuadradoamarillo;
Sprite cuadradorojo;
Sprite cuadradoazul;
Sprite cuadradonegro;
Sprite fondoblanco;
Texture textureamarillo;
Texture texturerojo;
Texture textureblue;
Texture texturenegro;
Texture textureblanco;

int main() {

	textureamarillo.loadFromFile("cuad_yellow.png");
	texturerojo.loadFromFile("cuad_red.png");
	textureblue.loadFromFile("cuad_blue.png");
	texturenegro.loadFromFile("chessb.png");
	textureblanco.loadFromFile("chessw.png");

	//haciendo que todos los cuadrados tengan el tamaño del cuadrado azul:

	float height_azul, width_azul; float height_negro, width_negro; 
	float height_rojo, width_rojo; float height_amarillo, width_amarillo;

	height_azul = (float)textureblue.getSize().y;

	height_negro = (float)texturenegro.getSize().y;
	height_rojo = (float)texturerojo.getSize().y;
	height_amarillo = (float)textureamarillo.getSize().y;

	width_azul = (float)textureblue.getSize().x;

	width_negro = (float)texturenegro.getSize().x;
	width_rojo = (float)texturerojo.getSize().x;
	width_amarillo = (float)textureamarillo.getSize().x;

	float escalaYnegro, escalaXnegro; float escalaYrojo, escalaXrojo; float escalaYamarillo, escalaXamarillo;

	escalaYnegro = height_azul / height_negro;
	escalaXnegro = width_azul / width_negro;
	cuadradonegro.setScale(escalaXnegro, escalaXnegro);

	escalaYamarillo = height_azul / height_amarillo;
	escalaXamarillo = width_azul / width_amarillo;
	cuadradoamarillo.setScale(escalaXamarillo, escalaXamarillo);

	escalaYrojo = height_azul / height_rojo;
	escalaXrojo = width_azul / width_rojo;
	cuadradorojo.setScale(escalaXrojo, escalaXrojo);

	
	RenderWindow App(sf::VideoMode(800, 800, 32),
		"Que ventana horrible");

	while (App.isOpen()) {


		fondoblanco.setTexture(textureblanco);
		fondoblanco.setScale(7, 6);

		cuadradoamarillo.setTexture(textureamarillo);
		cuadradorojo.setTexture(texturerojo);
		cuadradoazul.setTexture(textureblue);
		cuadradonegro.setTexture(texturenegro);


		cuadradoamarillo.setPosition  (328, 72);
		cuadradorojo.setPosition  (200, 72);
		cuadradonegro.setPosition(328, 200);
		cuadradoazul.setPosition  (200, 200);
		App.draw(fondoblanco);
		App.draw(cuadradoamarillo);
		App.draw(cuadradorojo);
		App.draw(cuadradonegro);
		App.draw(cuadradoazul);
		
		App.display();
	}
	return 0;
}