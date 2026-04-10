#pragma once

#include "Nombre.hpp"
#include <iostream>

class Fraction : public Nombre {
  int num, den;

public:
  Fraction(int n, int d) : num(n), den(d) {}
  double getValue() const override { return (double)num / den; }
  void afficher() const override {
    std::cout << "Fraction{" << num << "/" << den << "}";
  }
};