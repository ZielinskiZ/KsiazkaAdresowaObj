#include "AdresatMenedzer.h"

void AdresatMenedzer::dodajAdresata() {
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata() {
    Adresat adresat;

    adresat.ustawId(pobierzIdOstatniegoAdresata());
    adresat.ustawIdUzytkownika(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());

    string imie;
    cout << "Podaj imie: ";
    cin >> imie;
    adresat.ustawImie(imie);
    //adresat.imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    string nazwisko;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    adresat.ustawNazwisko(nazwisko);
    //adresat.nazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    string numerTelefonu;
    cout << "Podaj numer telefonu: ";
    cin >> numerTelefonu;
    adresat.ustawNumerTelefonu(numerTelefonu);

    string email;
    cout << "Podaj email: ";
    cin >> email;
    adresat.ustawEmail(email);

    string adres;
    cout << "Podaj adres: ";
    cin >> adres;
    adresat.ustawAdres(adres);

    return adresat;
}

int AdresatMenedzer::pobierzIdOstatniegoAdresata() {
    if (adresaci.empty() == true)
        return 1;
    else
        return adresaci.back().pobierzId() + 1;
}

void AdresatMenedzer::wczytajAdresatowZPliku() {
    adresaci = plikZAdresatami.wczytajAdresatowZPliku();
}
