#include "Nombre.hpp"

Nombre::Nombre() {}

Nombre::~Nombre() {}

void Nombre::triNombre(int n, Nombre *T[]) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (T[j]->getValue() > T[j + 1]->getValue()) {
        // On échange les pointeurs
        Nombre *temp = T[j];
        T[j] = T[j + 1];
        T[j + 1] = temp;
      }
    }
  }
}