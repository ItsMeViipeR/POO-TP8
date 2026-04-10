#pragma once

class Pion {
public:
  Pion();
  virtual ~Pion();

  void setVie(int vie);
  int vie() const;

private:
  int m_vie;
};
