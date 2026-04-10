#pragma once

#include "Vehicule.hpp"
#include <string>

class Voiture : protected Vehicule {
public:
  Voiture(std::string brand);
  ~Voiture();

  void presenteToi();
};
