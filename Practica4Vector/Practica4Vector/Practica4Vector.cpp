#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

/*int n, * vector;

void pedirNumero() {
	cout << "Escriba el numero de elementos:"; cin >> n;
	vector = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Escriba un numero: "; cin >> vector[i];
	}
}

void multiplicarVector() {
	int mult = 0;
	cout << "Escriba el numero por el que quiere multiplicar el vector: "; cin >> mult;
	cout << "Vector:\n";
	for (int i = 0; i < n; i++) {
		cout << vector[i] * mult << " | ";
	}
}
*/
int main() {
	//pedirNumero();
	//multiplicarVector();
	//delete[] vector;
	RenderWindow window(VideoMode(800, 600), "SFML Image Example");


	sf::Texture texture;
	if (!texture.loadFromFile("francesChata.jpg")) {
		return 0;
	}

	Sprite sprite(texture);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}
		window.clear();
		window.draw(sprite);
		window.display();
	}
	return 0;
}