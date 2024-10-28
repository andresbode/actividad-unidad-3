//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

//////Variables//////
Texture textureFondo;
Sprite spriteFondo;

Texture texturePlat;
Sprite spritePlat1;
Sprite spritePlat2;
Sprite spritePlat3;
Sprite spritePlat4;
Sprite spritePlat5;
Sprite spritePlat6;
Sprite spritePlat7;
Sprite spritePlat8;

///Punto de entrada a la aplicación///
int main() {

	//Cargamos la textura del archivo
	textureFondo.loadFromFile("fondo.jpg");
	texturePlat.loadFromFile("plataforma.jpg");

	//Cargamos el material del sprite
	spriteFondo.setTexture(textureFondo);
	spritePlat1.setTexture(texturePlat);
	spritePlat2.setTexture(texturePlat);
	spritePlat3.setTexture(texturePlat);
	spritePlat4.setTexture(texturePlat);
	spritePlat5.setTexture(texturePlat);
	spritePlat6.setTexture(texturePlat);
	spritePlat7.setTexture(texturePlat);
	spritePlat8.setTexture(texturePlat);

	float height_texture = (float)textureFondo.getSize().y;
	float width_texture = (float)textureFondo.getSize().x;

	float escalaX = 800.0 / width_texture;
	float escalaY = 600.0 / height_texture;

	spriteFondo.setScale(escalaX, escalaY);
	spritePlat1.setScale(0.2, 0.2);
	spritePlat2.setScale(0.2, 0.4);
	spritePlat3.setScale(0.2, 0.6);
	spritePlat4.setScale(0.2, 0.8);
	spritePlat5.setScale(0.2, 1.0);
	spritePlat6.setScale(0.2, 1.2);
	spritePlat7.setScale(0.2, 1.4);
	spritePlat8.setScale(0.7, 0.2);

	spritePlat1.setPosition(40, 550);
	spritePlat2.setPosition(120, 500);
    spritePlat3.setPosition(200, 450);
	spritePlat4.setPosition(280, 400);
	spritePlat5.setPosition(360, 350);
	spritePlat6.setPosition(440, 300);
	spritePlat7.setPosition(520, 250);
	spritePlat8.setPosition(600, 250);

	//Creamos la ventana
	RenderWindow App(VideoMode(800, 600, 32), "Que ventana horrible");

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(spriteFondo);
		App.draw(spritePlat1);
		App.draw(spritePlat2);
		App.draw(spritePlat3);
		App.draw(spritePlat4);
		App.draw(spritePlat5);
		App.draw(spritePlat6);
		App.draw(spritePlat7);
		App.draw(spritePlat8);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}
