#include "MetodyPomocnicze.h"

string MetodyPomocnicze::konwersjaIntNaString(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze::wczytajLinie() {
    string wejscie = "";
    cin.sync();
    getline(cin, wejscie);
    return wejscie;
}

string MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst) {
    if (!tekst.empty()) {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
        size_t pozycjaPierwszejLiteryWyrazu = szukajOdstepuMiedzyWyrazami(tekst);
        tekst[pozycjaPierwszejLiteryWyrazu] = toupper(tekst[pozycjaPierwszejLiteryWyrazu]);
    }
    return tekst;
}

size_t MetodyPomocnicze::szukajOdstepuMiedzyWyrazami(string tekst) {
    size_t znalezionaPozycja = tekst.find( ' ' );

    if( znalezionaPozycja == string::npos )
        return 0;

    else
        return (znalezionaPozycja + 1);
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba)
{
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;

    return liczbaInt;
}

string MetodyPomocnicze::pobierzLiczbe(string tekst, int pozycjaZnaku)
{
    string liczba = "";
    while(isdigit(tekst[pozycjaZnaku]) == true)
    {
        liczba += tekst[pozycjaZnaku];
        pozycjaZnaku ++;
    }
    return liczba;
}
