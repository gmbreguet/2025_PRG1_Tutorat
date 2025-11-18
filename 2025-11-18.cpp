#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum class Fruit {Pomme, Poire, Banane, Fraise};
const size_t nbre_fruits = 4;

string to_string1(Fruit fruit) {
   switch (fruit) {
      case Fruit::Pomme:
         return "Pomme";
      case Fruit::Poire:
         return "Poire";
      case Fruit::Banane:
         return "Banane";
      case Fruit::Fraise:
         return "Fraise";
   }
}

string to_string(Fruit fruit) {
   array<string, 4> str = {"Pomme"s, "Poire"s, "Banane"s, "Fraise"s};
   return str[(size_t)fruit];
}

using TabFruit = array<int, nbre_fruits>;

enum class Temperature {glace=0, froid=10, tiede=15, chaud=30};
array<string, 4> TabTemperature = {"glace", "froid", "tiede", "chaud"};

void afficher(Temperature t) {
   if (t >= Temperature::chaud)
      cout << "chaud";
   else if (t >= Temperature::tiede)
      cout << "tiede";
   else if (t >= Temperature::froid)
      cout << "froid";
   else if (t <= Temperature::glace)
      cout << "glace";
}

int main() {


   TabFruit fruits {3, 5, 2, 1};

   // combien de kg de banane
   cout << fruits[(size_t)Fruit::Banane] << " kg de " << to_string(Fruit::Banane);

   return EXIT_SUCCESS;
}

