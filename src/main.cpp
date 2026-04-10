#include "Moto.hpp"
#include "Vehicule.hpp"
#include "Voiture.hpp"

int main() {
  Moto moto = Moto("BMW");
  Voiture voiture = Voiture("Ford");
  Vehicule *moto2 = new Moto("Yamaha");
  Vehicule *voiture2 = new Voiture("Audi");

  moto.presenteToi();
  voiture.presenteToi();
  moto2->presenteToi();
  voiture2->presenteToi();

  return 0;
}
