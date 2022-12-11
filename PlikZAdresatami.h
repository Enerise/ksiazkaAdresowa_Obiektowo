#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

#include "MetodyPomocnicze.h"
#include "Adresat.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami:public PlikTekstowy
{
     string nazwaTymczasowegoPlikuZAdresatami = "adresaci_tymczasowy.txt";
     int idOstatniegoAdresata;
     int idUsunietegoAdresata;

     int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
     int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
     Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
     string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
     void zmienNazwePliku(string staraNazwa, string nowaNazwa);
     void usunPlik(string nazwaPlikuZRozszerzeniem);
     int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();
     int pobierzZPlikuIdOstatniegoAdresata();

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    bool dopiszAdresataDoPliku(Adresat adresat);
    int usunWybranegoAdresataZPliku(int idAdresata);
    void edytujAdresataWPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    int ustawIdUsunietegoAdresata(int noweIdUsunietegoAdresata);

};

#endif
