#pragma once

#include "Vehicule.hpp"
#include <string>

class Voiture : public Vehicule {
public:
  Voiture(std::string brand);
  ~Voiture();

  void presenteToi();
};
