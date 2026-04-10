#pragma once

#include "Pion.hpp"

class Soigneur : public Pion {
public:
  Soigneur();
  ~Soigneur();

  void soigne(Pion *dest);
};
