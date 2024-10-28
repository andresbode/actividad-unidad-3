//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

//////Variables//////
Texture texture;
Sprite sprite;

///Punto de entrada a la aplicación///
int main() {

	//Cargamos la textura del archivo
	texture.loadFromFile("fondo.jpg");

	//Cargamos el material del sprite
	sprite.setTexture(texture);

	float height_texture = (float)texture.getSize().y;
	float width_texture = (float)texture.getSize().x;

	float escalaX = 800.0 / width_texture;
	float escalaY = 600.0 / height_texture;

	sprite.setScale(escalaX, escalaY);

	//Creamos la ventana
	RenderWindow App(VideoMode(800, 600, 32), "Que ventana horrible");
	
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(sprite);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}
