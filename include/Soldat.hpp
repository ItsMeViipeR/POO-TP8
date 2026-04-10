#pragma once

#include "Pion.hpp"

class Soldat : public Pion {
public:
  Soldat();
  ~Soldat();

  void attaque(Pion *dest);
};
