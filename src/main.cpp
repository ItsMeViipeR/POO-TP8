#include "Entier.hpp"
#include "Float.hpp"
#include "Fraction.hpp"
#include "Moto.hpp"
#include "Nombre.hpp"
#include "Soigneur.hpp"
#include "Soldat.hpp"
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include <iostream>

void triNombre(int n, Nombre *T[]) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (T[j]->getValue() > T[j + 1]->getValue()) {
        // On échange les pointeurs
        Nombre *temp = T[j];
        T[j] = T[j + 1];
        T[j + 1] = temp;
      }
    }
  }
}

int main() {
  Moto moto = Moto("BMW");
  Voiture voiture = Voiture("Ford");
  Vehicule *moto2 = new Moto("Yamaha");
  Vehicule *voiture2 = new Voiture("Audi");

  moto.presenteToi();
  voiture.presenteToi();
  moto2->presenteToi();
  voiture2->presenteToi();

  Soldat g1;                          // 30 points de vie
  Soigneur s1;                        // 30 points de vie
  std::cout << g1.vie() << std::endl; // renvoie 30
  g1.attaque(&s1);                    // enlève 6 points de vie
  std::cout << s1.vie() << std::endl; // renvoie 24
  s1.soigne(&s1);                     // regagne 5 points de vie
  std::cout << s1.vie() << std::endl; // renvoie 29

  Nombre *T[4];
  T[0] = new Entier{6};
  T[1] = new Fraction{3, 2}; // fraction 3/2 (= 1.5)
  T[2] = new Float{345.556};
  T[3] = new Fraction{2, 3}; // fraction 2/3 (~ 0.6666)

  for (int i = 0; i < 4; i++) {
    T[i]->afficher();
    std::cout << std::endl;
  }

  triNombre(3, T);

  for (int i = 0; i < 4; i++) {
    T[i]->afficher();
    std::cout << std::endl;
  }

  return 0;
}
