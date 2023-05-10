#include <iostream>
using namespace std;

// Clase base 1
class Forma {
   public:
      void setAncho(int w) {
         ancho = w;
      }
      void setAlto(int h) {
         alto = h;
      }
   protected:
      int ancho;
      int alto;
};

// Clase base 2
class Color {
   public:
      void setColor(string c) {
         color = c;
      }
   protected:
      string color;
};

// Clase derivada que hereda de Forma y Color
class Rectangulo: public Forma, public Color {
   public:
      int getArea() {
         return (ancho * alto);
      }
      void displayColor() {
         cout << "Color: " << color << endl;
      }
};

int main() {
   Rectangulo rect;
   rect.setAncho(5);
   rect.setAlto(7);
   rect.setColor("Rojo");

   // Se puede acceder a los miembros de ambas clases base
   cout << "Area del rectangulo: " << rect.getArea() << endl;
   rect.displayColor();

   return 0;
}
