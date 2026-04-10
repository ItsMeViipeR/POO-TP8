#pragma once

#include "Nombre.hpp"
#include <iostream>

class Entier : public Nombre {
  long v;

public:
  Entier(long val) : v(val) {}
  double getValue() const override { return (double)v; }
  void afficher() const override { std::cout << "Entier{" << v << "}"; }
};