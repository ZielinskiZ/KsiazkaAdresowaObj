#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze {
    static string zamienPierwszaLiterePoZnakuNaDuza(string tekst, char znak);
public:
    static string konwersjaIntNaString(int liczba);
    static string wczytajLinie();
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
};
#endif
