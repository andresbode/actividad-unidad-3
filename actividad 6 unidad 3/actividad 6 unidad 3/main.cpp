//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

//////Variables//////
Texture textureGrey;
Sprite spriteGrey;

Texture textureBlue;
Sprite spriteBlue;

Texture textureRed;
Sprite spriteRed;

Texture textureYellow;
Sprite spriteYellow;

float height_Red;
float width_Red;

///Punto de entrada a la aplicación///
int main() {
   
    // Cargamos la textura del archivo
    textureGrey.loadFromFile("cuad_grey.png");
    spriteGrey.setTexture(textureGrey);
    spriteGrey.setPosition(375, 300); // Posición en la ventana

    textureBlue.loadFromFile("cuad_blue.png");
    spriteBlue.setTexture(textureBlue);
    spriteBlue.setPosition(125, 300); // Ajusta la posición

    textureRed.loadFromFile("cuad_red.png");
    spriteRed.setTexture(textureRed);
    spriteRed.setPosition(125, 50); // Ajusta la posición

    textureYellow.loadFromFile("cuad_yellow.png");
    spriteYellow.setTexture(textureYellow);
    spriteYellow.setPosition(375, 50); // Ajusta la posición

    // Obtenemos los tamaños de la textura roja
    height_Red = (float)textureRed.getSize().y;
    width_Red = (float)textureRed.getSize().x;

    // Escalamos los otros sprites para que tengan el mismo tamaño que el rojo
    spriteGrey.setScale(width_Red / (float)textureGrey.getSize().x, height_Red / (float)textureGrey.getSize().y);
    spriteBlue.setScale(width_Red / (float)textureBlue.getSize().x, height_Red / (float)textureBlue.getSize().y);
    spriteYellow.setScale(width_Red / (float)textureYellow.getSize().x, height_Red / (float)textureYellow.getSize().y);

    // Creamos la ventana
    RenderWindow App(VideoMode(800, 600, 32), "Que ventana horrible");

    // Loop principal
    while (App.isOpen()) {
       
        // Limpiamos la ventana
        App.clear();

        // Dibujamos los sprites
        App.draw(spriteGrey);
        App.draw(spriteBlue);
        App.draw(spriteRed);
        App.draw(spriteYellow);

        // Mostramos la ventana
        App.display();
    }

    return 0;
}
