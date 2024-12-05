#ifndef SKUP_H
#define SKUP_H

class Skup
{
  int brElemenata;
  int* elementi;

public: 
Skup();

Skup(int brEl);

~Skup();

inline int getBrElemenata() const {
  return brElemenata;
}

void UkloniDuplikate();

int Pripada(int element);


void Uredi();


void Ucitaj();

void Prikazi();


}; // kraj klase

#endif
