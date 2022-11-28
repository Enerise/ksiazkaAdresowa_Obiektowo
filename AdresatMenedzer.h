#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer{

    vector <Adresat> adresaci;
    UzytkownikMenedzer uzytkownikMenedzer;
    PlikZAdresatami plikZAdresatami;
    MetodyPomocnicze metodyPomocnicze;

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    string nazwaPlikuZAdresatami;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);

public:
    //AdresatMenedzer();
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
    idZalogowanegoUzytkownika = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
    };

    int dodajAdresata();

};

#endif
