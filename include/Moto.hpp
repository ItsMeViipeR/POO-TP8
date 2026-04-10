#pragma once

#include "Vehicule.hpp"
#include <string>

class Moto : protected Vehicule {
public:
  Moto(std::string brand);
  ~Moto();

  void presenteToi();
};
