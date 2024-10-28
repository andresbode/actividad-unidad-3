//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

//////Variables//////
Texture texturaChessB;
Texture texturaChessW;

Sprite spriteChessB;
Sprite spriteChessW;

///Punto de entrada a la aplicación///
int main() {

	//Cargamos la textura del archivo
	texturaChessB.loadFromFile("chessb.png");
	texturaChessW.loadFromFile("chessw.png");

	//Cargamos el material del sprite
	spriteChessB.setTexture(texturaChessB);
	spriteChessW.setTexture(texturaChessW);

	//Creamos la ventana
	RenderWindow App(VideoMode(800, 800, 32), "Que ventana horrible");

	// Loop principal
    while (App.isOpen()) {
        // Limpiar la ventana
        App.clear();

        // Dibujar el tablero
        for (int fila = 0; fila < 8; ++fila) {
            for (int col = 0; col < 8; ++col) {
                
                // Colocar el sprite en la posición correspondiente
                if ((fila + col) % 2 == 0) {
                    spriteChessW.setPosition(col * 100, fila * 100);
                    App.draw(spriteChessW);
                }
                else {
                    spriteChessB.setPosition(col * 100, fila * 100);
                    App.draw(spriteChessB);
                }
            }
        }

        // Mostrar en pantalla
        App.display();
    }
	return 0;
}
