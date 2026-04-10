#include "Voiture.hpp"
#include <iostream>
#include <string>

Voiture::Voiture(std::string brand) : Vehicule(brand) {}

Voiture::~Voiture() {}

void Voiture::presenteToi() {
  std::cout << "Je suis une voiture construite par " << m_brand << std::endl;
}