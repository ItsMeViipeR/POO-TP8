#pragma once

class Nombre {
public:
  Nombre();
  virtual ~Nombre();

  virtual double getValue() const = 0;
  virtual void afficher() const = 0;
  void triNombre(int n, Nombre *T[]);
};
