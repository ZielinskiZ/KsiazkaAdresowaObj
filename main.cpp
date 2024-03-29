#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuUzytkownika();

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");

    while (true) {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() != true) {
            switch (wybierzOpcjeZMenuGlownego()) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            switch (wybierzOpcjeZMenuUzytkownika()) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                cout << "Funkcjonalnosc w budowie" << endl;
                system("pause");
                //ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                cout << "Funkcjonalnosc w budowie" << endl;
                system("pause");
                //ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                cout << "Funkcjonalnosc w budowie" << endl;
                system("pause");
                //ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                cout << "Funkcjonalnosc w budowie" << endl;
                system("pause");
                //ksiazkaAdresowa.edytujAdresata(adresaci);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
    }
    return 0;
}

char wybierzOpcjeZMenuGlownego() {
    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    return MetodyPomocnicze::wczytajZnak();
}

char wybierzOpcjeZMenuUzytkownika() {
    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    return MetodyPomocnicze::wczytajZnak();
}
