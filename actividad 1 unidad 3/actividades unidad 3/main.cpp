//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

//////Variables//////
Texture texturaPunto1;
Texture texturaPunto2;
Texture texturaPunto3;
Texture texturaPunto4;
Sprite spritePunto1;
Sprite spritePunto2;
Sprite spritePunto3;
Sprite spritePunto4;
float escalaX = 0.2;
float escalaY = 0.2;

///Punto de entrada a la aplicación///
int main() {

	//Cargamos la textura del archivo
	texturaPunto1.loadFromFile("rcircle.png");
	texturaPunto2.loadFromFile("rcircle.png");
	texturaPunto3.loadFromFile("rcircle.png");
	texturaPunto4.loadFromFile("rcircle.png");

	//Cargamos el material del sprite
	spritePunto1.setTexture(texturaPunto1);
	spritePunto2.setTexture(texturaPunto2);
	spritePunto3.setTexture(texturaPunto3);
	spritePunto4.setTexture(texturaPunto4);

	//Escalamos tamaño
	spritePunto1.setScale(escalaX, escalaY);
	spritePunto2.setScale(escalaX, escalaY);
	spritePunto3.setScale(escalaX, escalaY);
	spritePunto4.setScale(escalaX, escalaY);

	//Posicionamos
	spritePunto1.setPosition(0, 0);
	spritePunto2.setPosition(775, 0);
	spritePunto3.setPosition(0, 575);
	spritePunto4.setPosition(775, 575);

	//Creamos la ventana
	RenderWindow App (VideoMode(800, 600, 32), "Que ventana horrible");

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(spritePunto1);
		App.draw(spritePunto2);
		App.draw(spritePunto3);
		App.draw(spritePunto4);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}
