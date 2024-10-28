//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

//////Variables//////
Texture texture;
Sprite sprite;

///Punto de entrada a la aplicación///
int main() {

    // Cargamos la textura del archivo
    texture.loadFromFile("cuad_grey.png");
    sprite.setTexture(texture);
    
    sprite.setPosition(400, 300);

    // Creamos la ventana
    RenderWindow App(VideoMode(800, 600, 32), "Que ventana horrible");

    // Loop principal
    while (App.isOpen()) {
     
        // Limpiamos la ventana
        App.clear();

        sprite.rotate(0.1);

        // Dibujamos el fondo
        App.draw(sprite);

        // Mostramos la ventana
        App.display();
    }

    return 0;
}