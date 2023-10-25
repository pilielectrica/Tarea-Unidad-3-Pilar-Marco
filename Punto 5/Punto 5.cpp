#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

int main() {
    RenderWindow App(sf::VideoMode(800, 800, 32), "Rotaci�n Animada en SFML");

    Texture textura;
    if (!textura.loadFromFile("fondo.jpg")) {
        cout << "Error al cargar la textura" << endl;
        return -1;
    }

    Sprite imagen(textura);
    imagen.setScale(0.2f, 0.2f);
    imagen.setPosition(300, 300);

    float anguloRotacion = 0.0f;
    float velocidadRotacion = 4.0f;

    Clock reloj; // Usamos un reloj para controlar el tiempo

    while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed) {
                App.close();
            }
        }

        // Calcular el tiempo transcurrido desde la �ltima iteraci�n del bucle
        Time tiempoTranscurrido = reloj.getElapsedTime();

        // Reiniciar el reloj para la pr�xima iteraci�n
        reloj.restart();

        // Actualizar el �ngulo de rotaci�n
        anguloRotacion += velocidadRotacion * tiempoTranscurrido.asSeconds();

        // Limitar el �ngulo de rotaci�n a 360 grados
        if (anguloRotacion >= 360.0f) {
            anguloRotacion -= 360.0f;
        }

        // Establecer el �ngulo de rotaci�n del sprite
        imagen.setRotation(anguloRotacion);

        App.clear();
        App.draw(imagen);
        App.display();
    }

    return 0;
}
