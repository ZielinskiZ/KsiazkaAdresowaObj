#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"


using namespace std;

class AdresatMenedzer {
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idZalogowanegoUzytkownika;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdOstatniegoAdresata();

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    void dodajAdresata();
    void wczytajAdresatowZPliku();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
};

#endif
