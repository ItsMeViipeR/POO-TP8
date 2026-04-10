#include "Moto.hpp"
#include <iostream>
#include <string>

Moto::Moto(std::string brand) : Vehicule(brand) {}

Moto::~Moto() {}

void Moto::presenteToi() {
  std::cout << "Je suis une moto construite par " << m_brand << std::endl;
}
