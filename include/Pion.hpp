#pragma once

class Pion {
public:
  Pion();
  ~Pion();

  int vie() const;

private:
  int m_vie;
  void setVie(int vie);
};
