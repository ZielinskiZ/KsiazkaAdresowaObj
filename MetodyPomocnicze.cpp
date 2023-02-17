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
        tekst = zamienPierwszaLiterePoZnakuNaDuza(tekst, ' ');
        tekst = zamienPierwszaLiterePoZnakuNaDuza(tekst, '-');
    }
    return tekst;
}

string MetodyPomocnicze::zamienPierwszaLiterePoZnakuNaDuza(string tekst, char znak) {
    for (size_t i = 0; i < tekst.size(); i++) {
        if (tekst[i] == znak)
            tekst[i+1] = toupper(tekst[i+1]);
    }
    return tekst;
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
