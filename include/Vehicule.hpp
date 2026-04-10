#pragma once

#include <string>

class Vehicule {
public:
  Vehicule(std::string brand) : m_brand(brand) {}
  virtual ~Vehicule() {}

  virtual void presenteToi() = 0;

protected:
  std::string m_brand;
};
