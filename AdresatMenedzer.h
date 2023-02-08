#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer {
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    UzytkownikMenedzer uzytkownikMenedzer;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdOstatniegoAdresata();

public:
//    AdresatMenedzer/*(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) */{};
    void dodajAdresata();
    void wczytajAdresatowZPliku();
};

#endif
