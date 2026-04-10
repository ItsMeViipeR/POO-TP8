#pragma once

#include "Vehicule.hpp"
#include <string>

class Moto : public Vehicule {
public:
  Moto(std::string brand);
  ~Moto();

  void presenteToi();
};
