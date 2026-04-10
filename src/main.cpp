#include "Moto.hpp"
#include "Soigneur.hpp"
#include "Soldat.hpp"
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include <iostream>

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

  return 0;
}
