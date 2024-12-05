#include <iostream>
#include "skup.h"

using namespace std;

Skup::Skup(){
  brElemenata = 0;
  elementi = nullptr;
}

Skup::Skup(int brEl){
  brElemenata = brEl;
  elementi = new int[brEl];
}

Skup::~Skup(){
  delete[] elementi;
}

void Skup::UkloniDuplikate()
{
  for (int i = 0;i< brElemenata;i++){
    for(int j=i+1;j<brElemenata;j++){
      if(elementi[i]==elementi[j]){
        for(int k = j; k < brElemenata-1; k++){
          elementi[k] = elementi[k+1];

        }
        brElemenata--;
        j--;
      }
    }
  }

}

int Skup::Pripada (int element){
  for(int i = 0; i < brElemenata; i++){
    if(elementi[i] == element){
      cout <<"Pripada" << endl;
      return 0;
    }
  }
 
  cout <<"Ne pripada" << endl;
  return 0;

}

void Skup::Uredi(){
  int pom;
  for(int i=0;i<brElemenata-1;i++){
    for(int j=i+1;j<brElemenata;j++){
      if(elementi[i] < elementi[j]){
        pom=elementi[i];
        elementi[i]=elementi[j];
        elementi[j]=pom;
      }
    }
  }
}


void Skup::Ucitaj(){
  for(int i = 0; i < brElemenata; i++){
    cout << "Unesi " << i+1 << ". element niza [" << i << "]: ";
    cin >> elementi[i];
  }
}

void Skup::Prikazi(){
  for(int i = 0; i < brElemenata; i++){
    cout << elementi[i] << " "; 
  } 
}

