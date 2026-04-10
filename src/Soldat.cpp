#include "Soldat.hpp"

Soldat::Soldat() {}

Soldat::~Soldat() {}

void Soldat::attaque(Pion *dest) { dest->setVie(dest->vie() - 6); }
