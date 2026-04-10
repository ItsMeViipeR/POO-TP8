#include "Soigneur.hpp"

Soigneur::Soigneur() {}

Soigneur::~Soigneur() {}

void Soigneur::soigne(Pion *dest) { dest->setVie(dest->vie() + 5); }