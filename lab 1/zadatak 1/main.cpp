#include "skup.h" 
#include <iostream>

using namespace std;

int main()
{ 
  Skup *s = new Skup(10);
  s->Ucitaj();
  s->Pripada(10);
  s->Pripada(150);
  s->UkloniDuplikate();
  s->Uredi();
  s->Prikazi();
  
  delete s;
}

