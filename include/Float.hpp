#pragma once

#include "Nombre.hpp"
#include <iostream>

class Float : public Nombre {
  double v;

public:
  Float(double val) : v(val) {}
  double getValue() const override { return v; }
  void afficher() const override { std::cout << "Float{" << v << "}"; }
};