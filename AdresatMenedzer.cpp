#include "AdresatMenedzer.h"

void AdresatMenedzer::dodajAdresata() {
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    if (idZalogowanegoUzytkownika > 0) {
        adresat = podajDaneNowegoAdresata();
        adresaci.push_back(adresat);
        plikZAdresatami.dopiszAdresataDoPliku(adresat);
    } else
        cout << "Przed wprowadzeniem danych nowego adresata, zaloguj sie do panelu Uzytkownika" << endl;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata() {
    Adresat adresat;

    adresat.ustawId(pobierzIdOstatniegoAdresata());
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    string imie;
    cout << "Podaj imie: ";
    cin >> imie;
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie));

    string nazwisko;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko));

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
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie(adres));

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

void AdresatMenedzer::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika) {
    idZalogowanegoUzytkownika = noweIdZalogowanegoUzytkownika;
}

void AdresatMenedzer::wyswietlWszystkichAdresatow() {
    for (int i = 0; i < adresaci.size(); i++) {
        cout << adresaci[i].pobierzId() << endl;
        cout << adresaci[i].pobierzIdUzytkownika() << endl;
        cout << adresaci[i].pobierzImie() << endl;
        cout << adresaci[i].pobierzNazwisko() << endl;
        cout << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << adresaci[i].pobierzEmail() << endl;
        cout << adresaci[i].pobierzAdres() << endl;
    }
}
